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
	cout << "Рубли: "; cin >> rub;
	cout << "Копейки: "; cin >> kop;
	/*cin >> a;*/
	Money a(rub, kop);
	cout << "b: ";
	cout << "Рубли: "; cin >> rub;
	cout << "Копейки: "; cin >> kop;
	/*cin >> b;*/
	Money b(rub, kop);

	cout << "a: ";
	cout << a;
	cout << "b: ";
	cout << b;
	cout << "Сравнение...";
	if (a > b)
	{
		cout << "\na > b\n";
	}
	else
	{
		cout << "\na < b\n";
	}
	cout << "Увеличение копеек постфиксно\n";
	a++;
	cout << a;
	cout << "Увеличение копеек префиксно\n";
	++b;
	cout << b;
}