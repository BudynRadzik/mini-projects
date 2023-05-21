
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdio.h>

int main()
{
	int number = 0;
	int random_number;
	int counter = 0;
	srand(time(NULL));
	
	random_number = ((std::rand() % 1000) + 1);
	
	
	//pêtla
	while (number != random_number)
	{
		std::cout << "Random number between 1 and 1000: " << random_number << std::endl;
		std::cout << "Your choice: ";
		std::cin >> number;
		std::cout << std::endl;
		system("cls");
		counter++;
		std::cout << std::endl;
		int scanf(number);
		if (number >= 1 && number <= 1000)
		{
			if (number == random_number)
			{
				std::cout << "Great shoot!!! the number you were looking for is:  " << random_number << std::endl;
				std::cout << "You found it at: " << counter << " shoot" << std::endl;
			}
			else
			{

				if (number > random_number)
				{
					std::cout << "Nice try but  number you choice is too big, try again" << std::endl;
					std::cout << "It was your " << counter << " try " << std::endl;
				}
				else
				{
					std::cout << "Nice try but  number you choice is too low, try again" << std::endl;
					std::cout << "It was your " << counter << " try " << std::endl;
				}
			}
		}
		else
		{
			std::cout << "Incorrect choice try againg" << std::endl;
		}
			
		
	}














	return 0;
}

