//Test.cpp
#include "Test.h"
#include <vector>
#include <iostream>
#include "LinkedListOfInts.h"

void Test::runTest()
{
    std::cout << "Testing Constructor.... ";
    if(testConstructor())
    {
        std::cout << "PASS" << std::endl;
    }
    else
    {
        std::cout << "FAIL" << std::endl;
    }
    std::cout << "Testing addFront.... ";
    if(testAddFront())
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

}
