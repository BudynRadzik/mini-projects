// LinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
# include <string>


struct Car
{
	std::string Brand, Model;
	int Prod_year;
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


	




int main()
{
	


	return 0;
}

