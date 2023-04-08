// bubble sorting.cpp 

#include <iostream>
#include <array>
#include <utility>
#include <algorithm>
#include <iomanip>

void array(int numbers[],  const int numbers_size)
{
	for (int j = 0; j < numbers_size - 1; j++)
	{
		for (int i = 0; i < numbers_size - 1; i++)
		{
			if (numbers[i] > numbers[i + 1])
			{
				int temp = numbers[i];
				numbers[i] = numbers[i + 1];
				numbers[i + 1] = temp;
			}
		}
	}
}

int main()
{

	 const int numbers_size = 9;
	int numbers[numbers_size] = { 43,100,1,2,55,3,4,5,2};
	std::cout << "Before bubble sort: ";
	for (int i = 0; i < numbers_size; i++)
	{
		std::cout << numbers[i] << " ";
	}
	std::cout << std::endl;
	array(numbers, numbers_size);
	std::cout << "After bubble sort: ";
	for (int i = 0; i < numbers_size; i++)
	{
		std::cout << numbers[i] << " ";
	}
	


	return 0;
}

