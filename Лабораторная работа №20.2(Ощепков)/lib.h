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
		cout << "�����\n\n";
		cout << "�����: " << mark << endl;
		cout << "������: " << model << endl;
		cout << "����: " << price << endl;
		cout << "\n\n";
	}
};