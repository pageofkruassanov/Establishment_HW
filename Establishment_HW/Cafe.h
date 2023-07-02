#pragma once
#include "Establishment.h"
class Cafe : public Establishment
{
public:
	Cafe(string* menu, double* priceMenu, int sizeMenu) : Establishment{ menu, priceMenu, sizeMenu } {};
	void deliverOrder(int* orderPos, int sizeOrder, int amountPerson, string adress) override;
};

