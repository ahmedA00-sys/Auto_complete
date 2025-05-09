#include "Trie.h"
#include<iostream>
#include<queue>
#include<stack>
#include<string>
#include<algorithm>
#include<utility>
#include<vector>
#include <stdexcept>
#include <unordered_map>

Trie::Trie()
{
    root = new Node();
}

void Trie::IncreaseFrequency(string Word)
{
    Node* current = root;

    for (char letter : Word)
    {
        if (!current->letters[letter])
            return;

        current = current->letters[letter];
    }

    if (current->EndWord)
        current->Frequency++;
}

void Trie::Insert(string Word, bool isInsertFromFile)
{
    Word = CaseSensitivity(Word);

    if (!ValidateWord(Word))
    {
        throw std::runtime_error("The Word \"" + Word + "\" is Invalid");
    }

    if (Search(Word, "word"))
    {
        throw std::runtime_error("The Word \"" + Word + "\" Already Exists");
    }

    Node* current = root;

    for (char letter : Word)
    {
        if (!current->letters[letter])
            current->letters[letter] = new Node();

        current = current->letters[letter];
    }

    current->EndWord = true;
    current->Frequency++;

    if (!isInsertFromFile)
    {
        current->insertation = true;
    }
}

void Trie::DeleteWord(string word) {
    word = CaseSensitivity(word);

    if (!ValidateWord(word)) {
        throw runtime_error("The Word \"" + word + "\" is Invalid");
    }

    Node* current = root;
    vector<pair<Node*, char>> path;
    for (char letter : word) {
        if (!current->letters[letter]) {
            throw runtime_error("Error: Word \"" + word + "\" not found.");
        }
        path.push_back({ current, letter });
        current = current->letters[letter];
    }

    current->EndWord = false;
    current->Frequency = 0;

    while (!path.empty()) {
        auto i = path.back();
        path.pop_back();

        Node* parent = i.first;
        char ch = i.second;
        Node* child = parent->letters[ch];

        if (child->letters.empty() && !child->EndWord) {
            delete child;
            parent->letters.erase(ch);
        }
        else {
            break;
        }
    }

}


bool Trie::Search(string Word, string Type)
{
    if (Type == "word")
    {

        Node* Current = root;

        for (char letter : Word)
        {
            if (!Current->letters[letter])
                return false;

            Current = Current->letters[letter];
        }

        return Current->EndWord;
    }
    else if (Type == "prefix")
    {
        Node* Current = root;

        for (char letter : Word)
        {
            if (!Current->letters[letter])
                return false;

            Current = Current->letters[letter];
        }
        return true;
    }

}

vector<string> Trie::DisplayByBFS(string Prefix)
{
    vector<string> Words;
    Prefix = CaseSensitivity(Prefix);

    if (!ValidateWord(Prefix))
    {
        throw runtime_error("The Word \"" + Prefix + "\" is Invalid");
    }

    if (!Search(Prefix, "prefix"))
    {
        throw runtime_error("The Word \"" + Prefix + "\" Doesn't Exist");
    }

    Node* Current = FindNode(Prefix);
    if (!Current)
        return Words; 

    queue<pair<Node*, string>> q;
    q.push({ Current, Prefix });

    while (!q.empty())
    {
        auto front = q.front();
        q.pop();
        Node* node = front.first;
        string Word = front.second;

        if (node->EndWord )
        {
            Words.push_back(Word);
        }

        for (auto& pair : node->letters)
        {
            q.push({ pair.second, Word + pair.first });
        }
    }

    return Words;
}


vector<string> Trie::DisplayByDFS(string Prefix)
{
    vector<string> Words;
    Prefix = CaseSensitivity(Prefix);

    if (!ValidateWord(Prefix))
    {
        throw runtime_error("The Word \"" + Prefix + "\" is Invalid");
    }

    if (!Search(Prefix, "prefix"))
    {
        throw runtime_error("The Word \"" + Prefix + "\" Doesn't Exist");
    }

    Node* startNode = FindNode(Prefix);
    if (!startNode)
        return Words; 

    stack<pair<Node*, string>> nodeStack;
    nodeStack.push({ startNode, Prefix });

    while (!nodeStack.empty())
    {
        auto pairTop = nodeStack.top();
        Node* node = pairTop.first;
        string word = pairTop.second;
        nodeStack.pop();

        if (node->EndWord )
        {
            Words.push_back(word);
        }

        vector<pair<char, Node*>> sortedLetters(node->letters.begin(), node->letters.end());
        sort(sortedLetters.rbegin(), sortedLetters.rend());

        for (auto& pair : sortedLetters)
        {
            nodeStack.push({ pair.second, word + pair.first });
        }
    }

    return Words;
}


vector<string> Trie::DisplayByFrequecy(string Prefix)
{
    vector<string> Words;
    Prefix = CaseSensitivity(Prefix);

    if (!ValidateWord(Prefix))
    {
        throw runtime_error("The Word \"" + Prefix + "\" is Invalid");
    }

    if (!Search(Prefix, "prefix"))
    {
        throw runtime_error("The Word \"" + Prefix + "\" Doesn't Exist");
    }

    Node* Current = FindNode(Prefix);
    if (!Current)
        return Words;

    queue<pair<Node*, string>> q;
    vector<pair<string, int>> WordsAndFrequency;

    q.push({ Current, Prefix });

    while (!q.empty())
    {
        auto front = q.front();
        q.pop();
        Node* node = front.first;
        string Word = front.second;

        if (node->EndWord)
            WordsAndFrequency.push_back({ Word, node->Frequency });

        for (auto& pair : node->letters)
            q.push({ pair.second, Word + pair.first });
    }

    sort(WordsAndFrequency.begin(), WordsAndFrequency.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
        return a.second > b.second;
        });

    for (const auto& pair : WordsAndFrequency)
    {
        Words.push_back(pair.first);
    }

    return Words;
}


void Trie::saveToFiles(string Prefix, vector<pair<string, int>>& p)
{

    Node* Current = root;

    queue<pair<Node*, string>> q;

    vector<pair<string, int>> WordsAndFrequency;

    q.push({ Current, Prefix });

    while (!q.empty())
    {
        auto front = q.front();

        q.pop();
        Node* node = front.first;
        string Word = front.second;

        if (node->EndWord)
            WordsAndFrequency.push_back({ Word,node->Frequency });


        for (auto pair : node->letters)
            q.push({ pair.second, Word + pair.first });

    }

    sort(WordsAndFrequency.begin(), WordsAndFrequency.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
        return a.second > b.second;
        });

    p = WordsAndFrequency;
}

vector<string> Trie::getsuggestions(string prefix, int operation) {
    vector<string> Words;

    if (operation == 1) {
        Words = DisplayByFrequecy(prefix);
    }
    else if (operation == 2) {
        Words = DisplayByBFS(prefix);
    }
    else if (operation == 3) {
        Words = DisplayByDFS(prefix);
    }
    else {
        throw runtime_error("Invalid operation specified.");
    }

    return Words;
}

void Trie::Clear() {
    DeleteAll(root);
    root = new Node(); 
}

void Trie::DeleteAll(Node* node) {
    if (node == nullptr)
        return;

    for (auto& pair : node->letters) {
        DeleteAll(pair.second);
    }

    delete node;
}

Node* Trie::FindNode(string Prefix)
{
    Prefix = CaseSensitivity(Prefix);
    if (!ValidateWord(Prefix))
        return NULL;

    if (!Search(Prefix, "prefix"))
        return NULL;

    Node* Current = root;

    for (char letter : Prefix)
    {
        if (!Current->letters[letter])
            return NULL;

        Current = Current->letters[letter];
    }

    return Current;
}

bool Trie::FindType(string prefix)
{
    Node* Current = FindNode(prefix);

    if (Current->EndWord)
        return false;
    else
        return true;
}

string Trie::CaseSensitivity(string Word)
{
    transform(Word.begin(), Word.end(), Word.begin(), ::tolower);

    return Word;
}

bool Trie::ValidateWord(string Word)
{
    for (char& letter : Word)
    {
        if (!isalpha(letter))
            return false;
    }

    return true;
}

vector<string> Trie::DisplayAllWords()
{
    vector<string> Words;
    queue<pair<Node*, string>> q;
    vector<pair<string, int>> WordsAndFrequency;

    q.push({ root, "" });

    while (!q.empty())
    {
        auto front = q.front();
        q.pop();
        Node* node = front.first;
        string Word = front.second;

        if (node->EndWord)
            WordsAndFrequency.push_back({ Word, node->Frequency });

        for (auto& pair : node->letters)
            q.push({ pair.second, Word + pair.first });
    }

    sort(WordsAndFrequency.begin(), WordsAndFrequency.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
        return a.second > b.second;
        });

    for (const auto& pair : WordsAndFrequency)
    {
        Words.push_back(pair.first);
    }

    return Words;
}
