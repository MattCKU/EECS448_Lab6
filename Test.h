//Test.h


#include <iostream>
#include "LinkedListofInts.h"

class Test
{
public:
    bool testConstructor(LinkedListOfInts a);
    bool testDestrucotr(LinkedListOfInts a);
    bool testIsEmpty(LinkedListOfInts a);
    bool testSize(LinkedListOfInts a);
    bool testSearch(LinkedListOfInts a);
    //skip test vector
    bool testAddBack(LinkedListOfInts a);
    bool testAddFront(LinkedListOfInts a);
    bool testRemoveBack(LinkedListOfInts a);
    bool testRemoveFront(LinkedListOfInts a);
}
