#include <iostream>
#include "lib.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	cout << "Консруктор с параметрами:\n\n";
	mashina a("Lada","Granta" , 14000000);
	a.print();
	cout << "Конструктор без параметров:\n\n";
	mashina b;
	b.print();
	cout << "Конструктор копирования:\n\n";
	mashina c = a;
	c.print();
}