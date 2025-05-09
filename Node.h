#pragma once
#include<unordered_map>

using namespace std;
class Node
{
public:

	unordered_map<char, Node*> letters;
	bool EndWord, insertation;
	int Frequency;
	Node();
};


