// Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
void swap_with_pointers(int*ptr_a,int*ptr_b)
{
    *ptr_a = *ptr_a + *ptr_b;
    *ptr_b = *ptr_a - *ptr_b;
    *ptr_a = *ptr_a - *ptr_b;


}
void swap_with_temp(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10;
    int b = 20;
    int*a = &a;
    int*b = &b;

    

    printf("Integers before swap: a %i , b %i \n",a,b);
    printf("------------------------------------\n");
    printf("Integers after swap using pointers:\n");
    printf("------------------------------------\n");

    swap_with_pointers(int* ptr_a, int* ptr_b);
    void swap_with_temp(int a, int b);
   

    return 0;
}

