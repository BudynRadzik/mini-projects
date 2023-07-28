// LinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include <string>
#include <cstdlib>


struct Car
{
	std::string Brand, Model;
	int Prod_year =0;
	Car* next;
	Car();
};
Car::Car()
{
	next = 0;
}
struct List
{
	Car* first;
	void Add_car(std::string Brand, std::string Model, int Prod_year);
	void Remove_car(int nr);
	void Display_list();
	List();

};
List::List()
{
	first = 0;
}
void List:: Add_car(std::string Brand, std::string Model, int Prod_year)
{
	Car* brand_new = new Car;
	brand_new->Brand = Brand;
	brand_new->Model = Model;
	brand_new->Prod_year = Prod_year;

	if (first == 0)
	{
		first = brand_new;
	}
	else
	{
		Car* temp = first;
		while(temp-> next)
		{
			temp = temp->next;
		}
		temp->next = brand_new;
		brand_new->next = 0;
	}
}
void List::Display_list()
{
	Car* temp = first;
	while (temp)
	{
		std::cout << " Brand: " << temp->Brand << " Model: " << temp->Model << " Year: " << temp->Prod_year << std::endl;
		temp = temp->next;
	}
}



int main()
{
	List* new_list = new List;

	new_list->Add_car("BMW", "E46", 2004);
	new_list->Add_car("OPEL", "ASTRA", 2012);
	new_list->Add_car("DAEWOO", "LANOS", 2000);
	new_list->Add_car("HONDA", "SYFIK", 2010);
	new_list->Add_car("RENAULT", "MEGANE", 1999);

	new_list->Display_list();

	delete (new_list);

	return 0;
}

