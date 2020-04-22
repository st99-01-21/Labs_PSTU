#include <iostream>
#include <string>

using namespace std;


class mashina
{
public:
	string mark;
	string model;
	int price;
	mashina()
	{
		mark = "lada";
		model = "priora";
		price = 35000000;
	};
	mashina(string a, string b, int c)
	{
		mark = a;
		model = b;
		price = c;
	};
	mashina(const mashina& p)
	{
		mark = p.mark;
		model = p.model;
		price = p.price;
	};
	~mashina()
	{

	};
	void print()
	{
		cout << "Вывод\n\n";
		cout << "Марка: " << mark << endl;
		cout << "Модель: " << model << endl;
		cout << "Цена: " << price << endl;
		cout << "\n\n";
	}
};