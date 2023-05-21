// Animals.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

int main()
{
    Dog d1;
    Cat c1;
   
    Animal* ptr;
    ptr = &d1;
    ptr->Voice();
    ptr = &c1;
    ptr->Voice();
    std::cout << "-------------------------------------" << std::endl;
	std::vector<Animal*> animals;

	for (int i = 0; i < 5; i++)
	{
		animals.push_back(new Dog());
	}

	for (int i = 0; i < 5; i++)
	{
		animals.push_back(new Cat());
	}

	for (int i = 0; i < animals.size(); i++)
	{
		animals[i]->Voice();
	}

	std::cout << "-----------------------------" <<std::endl;




    return 0;
}
