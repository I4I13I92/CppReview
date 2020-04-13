#include <iostream>

#include "LinkedList.h"
#include "Node.h"

int main()
{

    LinkedList myList;

    myList.insert(5);
    myList.insert(7);
    myList.insert(9);
    myList.remove(7);
    myList.printList();
    std::cout << myList.find(0);

    
    return 0;
}

