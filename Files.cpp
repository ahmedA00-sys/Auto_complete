#include "Files.h"
#include "Trie.h"
#include <stdexcept>
using namespace std;
Files::Files(string name)
{
	File = name;

}

void Files::Save(Trie& t)
{
	ofstream file(File);
	if (!file.is_open())
	{
		throw runtime_error("Error opening file for writing.");
	}

	vector<pair<string, int>> words;
	t.saveToFiles("\n", words);

	for (const auto& word : words)
	{
		file << word.first << " " << word.second << endl;
	}

	file.close();
}

void Files::Load(Trie& t)
{
    ifstream file(File);
    if (!file.is_open()) {
        throw runtime_error("Error opening file for reading.");
    }

    string word;
    int wordCount;
    while (file >> word >> wordCount) {
        if (word.empty()) {
            continue;
        }
        t.Insert(word, true);
        t.FindNode(word)->Frequency = wordCount;
    }
    file.close();

}
