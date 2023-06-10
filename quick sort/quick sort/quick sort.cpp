// quick sort.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>


void quickSort(int numbers[],int begin, int end)
{
    int i = begin;
    int j = end;
    
    int pivot = numbers[(begin+end)/2];
    std::cout << "pivot  "<<pivot << std::endl;
    int temp=0;
 
    do 
    {
        while (numbers[i] < pivot) i++;
        while (numbers[j] > pivot) j--;
        if (i <= j)
        {
            temp = numbers[i];
              numbers[i] = numbers[j];
              numbers[j] = temp;
             // i++; j++;

        }

    } while (i <= j);

    if (j > begin) quickSort(numbers, begin, j);
    if (i < end) quickSort(numbers, i, end);
  }
    


    
        
        
        
        



 
int main()
{
    int arr[] = { 1000,2,43,100,1,2,3,4,5,2,43,100,1,2,55,3,4,5 };
    int arr_size = 18;
    std::cout << arr_size << std::endl;
    quickSort(arr,0,17);


    for (int i = 0; i < sizeof(arr); i++)
    {
        std::cout << arr[i];
    }


    
    return 0;
}


