#include "Person.h"
#include "EMPLOYEE.h"
#include "Object.h"
#include "Vector.h"
#include <iostream>
#include<Windows.h>
#include <string>
using namespace std;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "ru");
	Vector v(5);
	Person a;
	cout << "���������� � ���� Person" << endl;
	cin >> a;
	cout << a << endl;
	Object* p = &a;
	cout << "������ ��������� �� ������ ���� Person" << endl;
	v.add(p);
	p->Show();
	cout << "���������� b ���� EMPLOYEE" << endl;
	EMPLOYEE b;
	cin >> b;
	cout << b << endl;
	cout << "������ ��������� �� ������ ���� EMPLOYEE" << endl;
	p = &b;
	v.add(p);
	p->Show();
	cout << "����� �������" << endl;
	cout << v;
}