// VoxMath++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "BasicStructures.hpp"

int main()
    {
    VoxData::Vect3 myVect = VoxData::Vect3(1, 1, 1);
    VoxData::Vect3 myNewVect = myVect + 5.0f;

    std::cout << myNewVect.ToString(1) << "\n";
    std::cout << myNewVect.ToString(2) << "\n";
    std::cout << myNewVect.ToString(3) << "\n";
    std::cout << myNewVect.ToString(4) << "\n";
    std::cout << myNewVect.ToString() << "\n";

    std::cout << myVect.ToString();
    }

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

