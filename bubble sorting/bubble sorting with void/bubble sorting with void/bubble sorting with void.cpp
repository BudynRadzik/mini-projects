// bubble sorting.cpp 

#include <iostream>
#include <iomanip>

void print_array(int* tab, int tab_size)
{
	for (int i = 0; i < tab_size; i++)
	{
		std::cout << tab[i] << ", ";
	}
}

void fill_array_random(int* tab, int tab_size, int min, int max)
{
	for (int i = 0; i < tab_size; i++)
	{
		tab[i] = std::rand() % (max - min + 1) + min;
	}
}

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
	srand(time(NULL));
	int counter;
	const int numbers_size = 1024;
	int numbers[numbers_size] = {0};
	fill_array_random(numbers, numbers_size, 0, numbers_size);
	std::cout << "Before bubble sort: ";
	//print_array(numbers, numbers_size);
	
	std::cout << std::endl;
	counter = bubble_sort(numbers, numbers_size);
	//counter = optimized_bubble_sort(numbers, numbers_size);
	std::cout << "After bubble sort: " << "compare counter: " << counter << std::endl;
	//print_array(numbers, numbers_size);


	return 0;
}

