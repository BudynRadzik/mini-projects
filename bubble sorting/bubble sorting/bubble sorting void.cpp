// bubble sorting.cpp 

#include <iostream>
#include <array>
#include <utility>
#include <algorithm>
#include <iomanip>

void array(int local_array[], const int array_size)
{
	//std::cout << "Enter a number of array elements: ";
		//std::cin >> array_size;
		//std::cout << "Number of array elements is: " << array_size << std::endl;
		//std::cout << "Enter  " << array_size << " array elements:";
		
		for (int i = 0; i < array_size; i++)
		{
			std::cin >> local_array[i];
		}
		
		
		for (int i = 0; i < array_size; i++)
		{

			std::cout << local_array[i] << std::endl;
		}
		

}

int main()
{
	
	const int numbers_size = 3;
	int numbers[numbers_size] = { 0 };
	array(numbers, numbers_size);
		//std::array <int,9> numbers { 2, 6, 5, 4, 3, 7, 1, 9, 8 };
		//int n = numbers.size();
		//std::cout << n << std::endl;
		
		int counter = 0;
		int temp=0;
		
		
		do
		{


			for (int i = 0; i < numbers_size-1 ; i++)
			{
				std::cout << std::endl;
				if (numbers[i] > numbers[i + 1])
				{

					temp = numbers[i];
					numbers[i] = numbers[i + 1];
					numbers[i + 1] = temp;

					for (int j = 0; j <numbers_size; j++)
						std::cout  << numbers[j];
					counter++;
				}
				



			}
		} while (counter!=13);
	

	
	return 0;
}


