#pragma once
#include <iostream>
#include "Animal.h"
class Cat :public Animal
{
public:
	virtual void Voice() override;
};

