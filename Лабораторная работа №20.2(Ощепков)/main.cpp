#include <iostream>
#include "lib.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	cout << "���������� � �����������:\n\n";
	mashina a("Lada","Granta" , 14000000);
	a.print();
	cout << "����������� ��� ����������:\n\n";
	mashina b;
	b.print();
	cout << "����������� �����������:\n\n";
	mashina c = a;
	c.print();
}