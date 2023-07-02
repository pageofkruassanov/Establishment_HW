#pragma once
#include <iostream>
using namespace std;
class Establishment
{
protected:
	string* menu;
	double* priceMenu;
	int sizeMenu;
public:
	Establishment() = delete;
	Establishment(string* menu, double* priceMenu, int sizeMenu) : menu{ menu }, priceMenu{ priceMenu }, sizeMenu{ sizeMenu } {};
	virtual void deliverOrder(int* orderPos, int sizeOrder, int amountPerson, string adress) = 0;
	void ShowMenu();
};

