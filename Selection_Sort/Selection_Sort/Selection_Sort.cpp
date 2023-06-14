// Selection_Sort.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>


void SelectionSort( int temp_arr[],int  arr_size);


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
    SelectionSort(array, array_size);
    for (int i = 0; i < array_size; i++)
    {
        std::cout << array[i] << " ";
    }

    return 0;
}
void SelectionSort(int temp_arr[], int  arr_size)
{
    int temp = 0;
    int min = 0;
    for (int i = 0; i < arr_size; i++)
    {
        for (int j = 0; j < arr_size; j++)
        {

        }
        min = temp_arr[i];

    }

}

