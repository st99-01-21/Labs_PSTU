#include <iostream>
#include <istream>
#include "lib.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	long rub;
	int kop;
	cout << "a: ";
	cout << "�����: "; cin >> rub;
	cout << "�������: "; cin >> kop;
	/*cin >> a;*/
	Money a(rub, kop);
	cout << "b: ";
	cout << "�����: "; cin >> rub;
	cout << "�������: "; cin >> kop;
	/*cin >> b;*/
	Money b(rub, kop);

	cout << "a: ";
	cout << a;
	cout << "b: ";
	cout << b;
	cout << "���������...";
	if (a > b)
	{
		cout << "\na > b\n";
	}
	else
	{
		cout << "\na < b\n";
	}
	cout << "���������� ������ ����������\n";
	a++;
	cout << a;
	cout << "���������� ������ ���������\n";
	++b;
	cout << b;
}