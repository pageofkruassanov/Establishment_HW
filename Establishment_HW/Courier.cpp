#include "Courier.h"

void Courier::deliver(Establishment* place)
{
	int leadTime = 0;
	int person, sizeOrder;
	string adress;
	cout << "������� ����������������� ������ ������ ������: ";
	cin >> sizeOrder;
	cout << "������� ���-�� ������: ";
	cin >> person;
	int* order = new int[sizeOrder];
	place->ShowMenu();
	cout << endl << "�������� ������� �� ����: ";
	for (int i = 0; i < sizeOrder; i++) {
		cin >> order[i];
		--order[i];
		cout << ", ";
		leadTime += 12;
	}
	cout << endl << "������� ������ ��������: ";
	getline(cin,adress);
	cout << endl << "-------------------" << endl;
	cout << "��� ����� ������� ������" << endl;
	system("pause");
	place->deliverOrder(order, sizeOrder, person, adress);
	cout << "Delivery time: " << leadTime + deliveryTime << " min" << endl;
	system("pause");
}
