// List.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int main()
{
    short  wiek;
    std::cin >> wiek;
    std::cout << "Podany wiek: " << wiek << std::endl;
    if (wiek >= 18)
    {
        std::cout << "Twierdzisz, ze jestes pelnoletni..." << std::endl;
        std::cout << "ale czy to kogos interesuje? :)" << std::endl;
    }
    std::cout << "Koniec" << std::endl;
    return 0;
}