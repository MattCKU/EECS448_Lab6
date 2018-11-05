//Test.h
#ifndef TEST_H
#define TEST_H

#include <iostream>
#include "LinkedListOfInts.h"

class Test
{
public:
    void runTest();
    bool testConstructor();
    bool testDestructor( );
    bool testIsEmpty();
    bool testSize();
    bool testSearch();
    //skip test vector
    bool testAddBack();
    bool testAddFront();
    bool testRemoveBack();
    bool testRemoveFront();
};

#endif
