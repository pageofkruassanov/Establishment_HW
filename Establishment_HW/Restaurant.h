#pragma once
#include "Establishment.h"
class Restaurant : public Establishment
{
public:
	Restaurant(string* menu, double* priceMenu, int sizeMenu) : Establishment{ menu, priceMenu, sizeMenu } {};
	void deliverOrder(int* orderPos, int sizeOrder, int amountPerson, string adress) override;
};

