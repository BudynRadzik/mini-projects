// quick sort.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

void quicksort(int temp_tab[], int begin, int end);

int main()
{
    int array[] = { 1,9,2,8,3,7,4,6,5,0 };
    int array_size = sizeof(array) / sizeof(int);
    std::cout << "Array size: " << array_size << std::endl;
    std::cout << "-------------------------" << std::endl;
    std::cout << "Array before quick sort:" << std::endl;

    for (int i = 0; i < array_size; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << "\n";
    std::cout << "-------------------------" << std::endl;
    std::cout << "Array after quick sort:" << std::endl;

    quicksort(array, 0, array_size - 1);

    for (int i = 0; i < array_size; i++)
    {
        std::cout << array[i] << " ";
    }
    return 0;
}
void quicksort(int temp_tab[], int begin, int end) {
    int i = begin;
    int j = end;
    int pivot = temp_tab[(begin + end) / 2];
    do {
        while (temp_tab[i] < pivot) i++;
        while (temp_tab[j] > pivot) j--;
        if (i <= j) {
            int temp = temp_tab[i];
            temp_tab[i] = temp_tab[j];
            temp_tab[j] = temp;
            i++;
            j--;
        }
    } while (i <= j);
    if (begin < j) quicksort(temp_tab, begin, j);
    if (end > i) quicksort(temp_tab, i, end);
}

