// bubble sorting.cpp 

#include <iostream>
#include <iomanip>

int bubble_sort(int numbers[],  const int numbers_size)
{
	int temp = 0, compare_counter = 0;
	for (int j = 0; j < numbers_size - 1; j++)
	{
		for (int i = 0; i < numbers_size - 1; i++)
		{
			compare_counter++;
			if (numbers[i] > numbers[i + 1])
			{
				temp = numbers[i];
				numbers[i] = numbers[i + 1];
				numbers[i + 1] = temp;
			}
		}
	}
	return compare_counter;
}

int optimized_bubble_sort(int numbers[], const int numbers_size)
{
	int temp = 0, swap_counter = 1, j, i, compare_counter = 0;
	for (j = 0; j < numbers_size - 1 && swap_counter != 0; j++)
	{
		swap_counter = 0;
		for (i = 0; i < numbers_size - 1 - j; i++)
		{
			compare_counter++;
			if (numbers[i] > numbers[i + 1])
			{
				temp = numbers[i];
				numbers[i] = numbers[i + 1];
				numbers[i + 1] = temp;
				swap_counter++;
			}
		}
	}
	return compare_counter;
}

int main()
{
	int counter;
	const int numbers_size = 15;
	int numbers[numbers_size] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	std::cout << "Before bubble sort: ";
	for (int i = 0; i < numbers_size; i++)
	{
		std::cout << numbers[i] << " ";
	}
	std::cout << std::endl;
	counter = bubble_sort(numbers, numbers_size);
	//counter = optimized_bubble_sort(numbers, numbers_size);
	std::cout << "After bubble sort: " << "compare counter: " << counter << std::endl;
	for (int i = 0; i < numbers_size; i++)
	{
		std::cout << numbers[i] << " ";
	}
	


	return 0;
}

