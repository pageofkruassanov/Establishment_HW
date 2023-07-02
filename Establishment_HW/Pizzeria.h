#pragma once
#include "Establishment.h"
class Pizzeria : public Establishment
{
public:
	Pizzeria(string* menu, double* priceMenu, int sizeMenu) : Establishment{ menu, priceMenu, sizeMenu } {};
	void deliverOrder(int* orderPos, int sizeOrder, int amountPerson, string adress) override;
};

