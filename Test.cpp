//Test.cpp
#include "Test.h"
#include <vector>
#include <iostream>
#include "LinkedListOfInts.h"

void Test::runTest()
{
    // Testing Contructor
    std::cout << "Testing Constructor.... ";
    if(testConstructor())
    {
        std::cout << "PASS" << std::endl;
    }
    else
    {
        std::cout << "FAIL" << std::endl;
    }

    //Testing addFront
    std::cout << "Testing addFront.... ";
    if(testAddFront())
    {
        std::cout << "PASS" << std::endl;
    }
    else
    {
        std::cout << "FAIL" << std::endl;
    }

    //Testing addBack
    std::cout << "Testing addBack.... ";

    if(testAddBack())
    {
        std::cout << "PASS" << std::endl;
    }
    else
    {
        std::cout << "FAIL" << std::endl;
    }

    //Testing isEmpty
    std::cout << "Testing isEmpty.... ";

    if(testIsEmpty())
    {
        std::cout << "PASS" << std::endl;
    }
    else
    {
        std::cout << "FAIL" << std::endl;
    }

    //Testing size
    std::cout << "Testing size.... ";
    if(testSize())
    {
        std::cout << "PASS" << std::endl;
    }
    else
    {
        std::cout << "FAIL" << std::endl;
    }
}


bool Test::testConstructor()
{
    LinkedListOfInts a;
    std::vector<int> temp = a.toVector();
    if(a.size() == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Test::testAddFront()
{
    LinkedListOfInts a;
    a.addFront(10);
    std::vector<int> temp = a.toVector();
    if(temp.at(0) != 10)
    {
        return false;
    }
    a.addFront(15);
    temp = a.toVector();
    if(temp.at(0) != 15)
    {
        return false;
    }
    else
    {
        return true;
    }
}

bool Test::testSize()
{
    LinkedListOfInts a;
    if(a.size() != 0)
    {
        return false;
    }
    a.addBack(10);
    if(a.size() != 1)
    {
        return false;
    }

    for(int i = 0; i < 100; i++)
    {
        a.addBack(i);
    }
    if(a.size() != 101)
    {
        return false;
    }
    return true;
}


bool Test::testAddBack()
{
    LinkedListOfInts a;
    a.addBack(10);
    std::vector<int> temp = a.toVector();
    if(temp.at(0) != 10)
    {
        return false;
    }
    a.addBack(15);
    temp = a.toVector();
    if(temp.at(1) != 15)
    {
        return false;
    }
    else
    {
        return true;
    }
}



bool Test::testDestructor()
{
    LinkedListOfInts a;
    std::vector<int> temp = a.toVector();


}

bool Test::testIsEmpty()
{
    LinkedListOfInts a;
    std::vector<int> temp = a.toVector();
    if(!a.isEmpty())
    {
        return false;
    }

    if(temp.size() != 0)
    {
        return false;
    }
    a.addBack(10);
    if(a.isEmpty())
    {
        return false;
    }
    return true;


}
