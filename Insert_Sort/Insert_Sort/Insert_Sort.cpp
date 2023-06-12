// Insert_Sort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


void InsertSort(int temp_array[],int arr_size);

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
    InsertSort(array, array_size);
    for (int i = 0; i < array_size; i++)
    {
        std::cout << array[i] << " ";
    }

    return 0;
}

void InsertSort(int temp_arr[], int arr_size) 
{
    for (int i = 1; i < arr_size; i++)
    {
        int temp = temp_arr[i];
        int j = i - 1;
        while (j >= 0 && temp_arr[j] > temp) {
            temp_arr[j + 1] = temp_arr[j];
            j--;
        }
        temp_arr[j + 1] = temp;

    }
    
}