#include "Establishment.h"

void Establishment::ShowMenu()
{
	cout.width(14);
	cout << "MENU" << endl;
	for (int i = 0; i < sizeMenu; i++) {
		cout << i + 1 << ") " << menu[i] << ". Price: " << priceMenu[i] << "$" << endl;
	}
}
