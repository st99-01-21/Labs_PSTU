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
	cout << "Переменная а типа Person" << endl;
	cin >> a;
	cout << a << endl;
	Object* p = &a;
	cout << "Ставим указатель на объект типа Person" << endl;
	v.add(p);
	p->Show();
	cout << "Переменная b типа EMPLOYEE" << endl;
	EMPLOYEE b;
	cin >> b;
	cout << b << endl;
	cout << "Ставим указатель на объект типа EMPLOYEE" << endl;
	p = &b;
	v.add(p);
	p->Show();
	cout << "Вывод вектора" << endl;
	cout << v;
}