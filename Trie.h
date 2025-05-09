#pragma once
#include<iostream>
#include<string>
#include"Node.h"
#include<utility>
#include<vector>
#include <stdexcept>
using namespace std;
class Trie
{
    Node* root;
    void DeleteAll(Node* node);

public:
    Trie();
    bool Search(string Word, string Type);
    void IncreaseFrequency(string Word);
    void Insert(string Word, bool isInsertFromFile);
    void DeleteWord(string Word);
    vector<string> DisplayByBFS(string Prefix);
    vector<string> DisplayByDFS(string Prefix);
    vector<string> DisplayByFrequecy(string Prefix);
    Node* FindNode(string Prefix);
    void saveToFiles(string Prefix, vector<pair<string, int>>& words);
    vector<string> getsuggestions(string Prefix, int operation);
    bool FindType(string prefix);
    string CaseSensitivity(string Word);
    bool ValidateWord(string Word);
    void Clear();
    vector<string> DisplayAllWords();
};

