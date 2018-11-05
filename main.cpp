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
	//Example of declaring a LinkedListOfInts
	LinkedListOfInts testableList;
	for(int i = 0; i < 10; i++)
	{
		testableList.addBack(i);
	}
	std::vector<int> listV = testableList.toVector();
	for(int i = 0; i < listV.size(); i++)
	{
		std::cout << listV.at(i) << ' ';
	}
	//You won't do all the tests in main; that's what your Test class will be for
	//Example:
	//TestSuite myTester;
	//myTester.runTests();

	std::cout << "Running...\nAnd we're done.\nGoodbye.\n";

	return (0);

}
