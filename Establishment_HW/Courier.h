#pragma once
#include "Establishment.h"
#include <string>
class Courier
{
	int deliveryTime = 20;
public:
	void deliver(Establishment* place);
};

