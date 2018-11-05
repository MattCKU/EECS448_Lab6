/**
*	@file Test.h
*	@author Matthew Cherry
*	@date 11/5/2018
*	@brief Test Suite for LinkedListOfInts
*/

#ifndef TEST_H
#define TEST_H

#include <iostream>
#include "LinkedListOfInts.h"

class Test
{
public:
    /*
    * Starting Point to run full test suite.
    */
    void runTest();
private:
    bool testConstructor();
    bool testDestructor( );
    bool testIsEmpty();
    bool testSize();
    bool testSearch();
    //skip test vector, guranteed
    bool testAddBack();
    bool testAddFront();
    bool testRemoveBack();
    bool testRemoveFront();
};

#endif
