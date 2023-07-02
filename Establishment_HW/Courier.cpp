#include "Courier.h"

void Courier::deliver(Establishment* place)
{
	int leadTime = 0;
	int person, sizeOrder;
	string adress;
	cout << "Введите предположительный размер вашего заказа: ";
	cin >> sizeOrder;
	cout << "Введите кол-во персон: ";
	cin >> person;
	int* order = new int[sizeOrder];
	place->ShowMenu();
	cout << endl << "Веберите позиции из меню: ";
	for (int i = 0; i < sizeOrder; i++) {
		cin >> order[i];
		--order[i];
		cout << ", ";
		leadTime += 12;
	}
	cout << endl << "Введите адресс доставки: ";
	getline(cin,adress);
	cout << endl << "-------------------" << endl;
	cout << "Ваш заказ успешно принят" << endl;
	system("pause");
	place->deliverOrder(order, sizeOrder, person, adress);
	cout << "Delivery time: " << leadTime + deliveryTime << " min" << endl;
	system("pause");
}
