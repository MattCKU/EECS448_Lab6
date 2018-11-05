/**
*	@author
*	@date
*	@file main.cpp
*	@brief driver for LinkedList demo
*/
#include <iostream>
#include "LinkedListOfInts.h"
#include <vector>
#include "Test.h"

int main(int argc, char** argv)
{
	Test foo;
	foo.runTest();
	LinkedListOfInts a;
	for (int i = 0; i < 10; i++)
	{
		a.addFront(i);
	}
	std::vector<int> temp = a.toVector();
	std::cout << "Real Value: ";
	for(int i = 0; i < temp.size(); i++)
	{
		std::cout << temp.at(i) << ' ';
	}
	std::cout << std::endl;

	std::cout << "Expected: 0 1 2 3 4 5 6 7 8 9\n";
	std::cout << "Running...\nAnd we're done.\nGoodbye.\n";

	return (0);

}
