#include <iostream>

using namespace std;

class triad
{
public:
	int first;
	int second;
	int third;
	triad(int a, int b, int c)
	{
		first = a;
		second = b;
		third = c;
	};
	void zapoln_izm()
	{
		cout << "������� ������ �����\n";
		cin >> first;
		cout << "������� ������ �����\n";
		cin >> second;
		cout << "������� ������ �����\n";
		cin >> third;
	};
	void print()
	{
		cout << "\n\n�����\n\n";
		cout << "������ �����: " << first << endl;
		cout << "������ �����: " << second << endl;
		cout << "������ �����: " << third << endl;
	};
	void plus_one()
	{
		cout << "\n���������� �� 1\n";
		first++;
		second++;
		third++;
	};
	triad()
	{
		zapoln_izm();
	};
};

class time :public triad
{
public:
	int hours;
	int minutes;
	int seconds;
	time() :triad()
	{
		hours = first;
		minutes = second;
		seconds = third;
	};
	void plus_n(int n)
	{
		cout << "\n���������� �� " << n << endl;
		hours+=n;
		minutes+=n;
		seconds+=n;
	}
	void print()
	{
		cout << "\n\n�����\n\n";
		cout << hours << ':' << minutes << ':' << seconds << endl;
	};

};
