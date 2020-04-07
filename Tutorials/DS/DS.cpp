#include <iostream>

#include "LinkedList.h"
#include "Node.h"

int main()
{

    LinkedList myList;




    myList.insert(5);
    //myList.insert(7);

    if (myList.isEmpty())
    {
        std::cout << "The list is empty.\n";
    }
    else 
    {
        std::cout << "The list is not empty.\n";
        std::cout << "Value of the head is: " << myList.getHead() << "\n";
        std::cout << "Value of the tail is: " << myList.getTail() << "\n";
    }

    return 0;
}

