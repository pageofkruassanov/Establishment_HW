#include <iostream>
#include "Establishment.h"
#include "Courier.h"
#include "Restaurant.h"
#include "Cafe.h"
#include "Pizzeria.h"
using namespace std;

int main()
{
    setlocale(0, "Rus");
    Courier cour;
    // menu for restaurant:
    int sizeRest = 10;
    string* menuRest = new string[sizeRest]{ "������ �� ������ � ��������� ������","������ � ������� �����", "�������� � ��������� �����", "���-��� �� �����","����� ����", "��� ��", "����� � ���������", "�������� �������", "���","����" };
    double* priceRest = new double[sizeRest] {32.5, 29.7, 21.15, 20, 15, 21.1, 21, 11, 10, 10.5};
    // menu for pizzaria:
    int sizePizz = 8;
    string* menuPizz = new string[sizePizz]{ "����� 4 ����", "����� � ��������������", "������", "���������", "���������", "�����", "���", "����" };
    double* pricePizz = new double[sizePizz] {12, 15.99, 13.2, 9, 10.99, 7, 5, 7.99};
    // menu for cafe:
    int sizeCafe = 10;
    string* menuCafe = new string[sizeCafe]{ "�������� ���", "�������� ��-���������", "����� ���������", "����� � ��������������", "����� ������", "����� ���������", "����", "�����", "���", "����" };
    double* priceCafe = new double[sizeCafe] {7.2, 8.2, 15.75, 17.6, 13.22, 13, 99, 11.5, 8.99, 9.99 };
    int choice;
    while (true) {
        cout << "�������� ��������� ��� �������� - 1) ��������, 2) ����, 3)��������: ";
        cin >> choice;
        switch (choice) {
        case 1:
        {
            system("cls");
            Establishment* est = new Restaurant(menuRest, priceRest, sizeRest);
            cour.deliver(est);
            delete est;
            break;
        }
        case 2:
        {
            system("cls");
            Establishment* est = new Cafe(menuCafe, priceCafe, sizeCafe);
            cour.deliver(est);
            delete est;
            break;
        }
        case 3:
        {
            system("cls");
            Establishment* est = new Pizzeria(menuPizz, pricePizz, sizePizz);
            cour.deliver(est);
            delete est;
            break;
        }
        default:
        {
            system("cls");
            cout << "Error input" << endl;
            system("pause");
            break;
        }
        }
    }
}