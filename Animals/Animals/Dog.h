#pragma once
#include "Animal.h"
#include <iostream>
class Dog : public Animal
{
public:
	Dog();
	virtual void Voice() override;
	~Dog();
};

