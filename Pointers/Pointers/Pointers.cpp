// Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
void swap_without_temp(int*ptr_a,int*ptr_b)
{
    *ptr_a = *ptr_a + *ptr_b;
    *ptr_b = *ptr_a - *ptr_b;
    *ptr_a = *ptr_a - *ptr_b;


}
void swap_with_temp(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap_with_xor(int* a, int* b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
int main()
{
    int a = 10;
    int b = 20;
    
    printf("Integers before swap: a %i , b %i \n", a, b);
    printf("------------------------------------\n");
    printf("Integers after swap using pointers:\n");
    printf("------------------------------------\n");

    swap_with_temp(&a, &b);
    printf("Integers after swap with temp: a %i , b %i \n", a, b);
    //printf("Integers before swap: a %i , b %i \n", a, b);

    swap_without_temp(&a, &b);
    printf("Integers after swap without temp: a %i , b %i \n", a, b);
    //binarnie 

    swap_with_xor(&a, &b);
    printf("Integers after swap with xor: a %i , b %i \n", a, b);

    return 0;
}

