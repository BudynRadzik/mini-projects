// Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


int main()
{
    int number;

    cout << "Numbers in Array: ";
    cin >>  number;
    int* array;
    array = new int[number];

    for (int i=0; i<number; i ++ )
    {
        cout <<(int) array << endl;
        array++;
    }


    delete [] array;

    return 0;
}

