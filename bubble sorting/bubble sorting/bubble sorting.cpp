// bubble sorting.cpp 

#include <iostream>
#include <array>
#include <utility>
#include <algorithm>
#include <iomanip>

int main()
{

	std::array <int, 9> numbers{ 2, 6, 5, 4, 3, 7, 1, 9, 8 };
	int n = numbers.size();
	std::cout << n << std::endl;

	int counter = 0;
	int temp = 0;


	
	

	for (int j = 0; j < numbers.size() - 1; j++)
	{

		std::cout << std::endl;
		for (int i = 0; i < numbers.size() - 1; i++)
		{
			
			if (numbers[i] > numbers[i + 1])
			{

				temp = numbers[i];
				numbers[i] = numbers[i + 1];
				numbers[i + 1] = temp;

				//for (int j = 0; j < numbers.size() - 1; j++)
					//std::cout << numbers[i] << " ";

			}
			
			std::cout << numbers[i] << " ";
			


		}

	}


	return 0;
}