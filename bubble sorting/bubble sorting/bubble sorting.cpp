// bubble sorting.cpp 

#include <iostream>
#include <array>
#include <utility>
#include <algorithm>
#include <iomanip>

int main()
{

	std::array <int, 9> numbers{9,8,7,6,5,4,3,2,1};
	int n = numbers.size();
	std::cout << n << std::endl;

	int swap_counter = 1;
	int temp = 0;

	for (int j = 0; j < numbers.size(); j++)
	{
		std::cout << numbers[j] << " ";
	}
	std::cout << std::endl;

	for (int j = 0; j < numbers.size()-1 && swap_counter!=0 ; j++)
	{
		swap_counter = 0;
		for (int i = 0; i < numbers.size() - 1-j; i++)
		{
			if (numbers[i] > numbers[i + 1])
			{
				temp = numbers[i];
				numbers[i] = numbers[i + 1];
				numbers[i + 1] = temp;
				swap_counter++;
			}
		}
		
		for (int k = 0; k < numbers.size(); k++)
		{
			std::cout << numbers[k] << " ";
		}
		std::cout << std::endl;
			
			


		

	}


	return 0;
}