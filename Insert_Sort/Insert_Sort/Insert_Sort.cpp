// Insert_Sort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int array[] = { 1,9,2,8,3,7,4,6,5,0 }; //10
    int array_size = sizeof(array) / sizeof(int);
    std::cout << "Array size: " << array_size << std::endl;
    std::cout << "-------------------------" << std::endl;
    std::cout << "Array before insert sort:" << std::endl;

    for (int i = 0; i < array_size; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << "\n";
    std::cout << "-------------------------" << std::endl;
    std::cout << "Array after insert sort:" << std::endl;

    return 0;
}

