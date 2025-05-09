#include "Node.h"

Node::Node()
{
	for (auto it : letters)
	{
		it.second = NULL;
	}
	Frequency = 0;
	EndWord = false;
	insertation = false;
}