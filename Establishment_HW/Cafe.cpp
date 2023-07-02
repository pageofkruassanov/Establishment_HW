#include "Cafe.h"

void Cafe::deliverOrder(int* orderPos, int sizeOrder, int amountPerson, string adress)
{
	double priceOrder = 0;
	cout << "Your order: " << endl;
	for (int i = 0; i < sizeOrder; i++) {
		if (orderPos[i] >= 0 && orderPos[i] < sizeMenu) {
			cout << menu[orderPos[i]] << endl;
			priceOrder += priceMenu[orderPos[i]];
		}
	}
	cout << "Order price: " << priceOrder << "$" << endl;
	cout << "For " << amountPerson << " person" << endl;
	cout << "Adress: " << adress << endl;
}
