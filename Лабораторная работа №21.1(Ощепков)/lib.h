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
		cout << "Введите первое число\n";
		cin >> first;
		cout << "Введите второе число\n";
		cin >> second;
		cout << "Введите третье число\n";
		cin >> third;
	};
	void print()
	{
		cout << "\n\nВЫВОД\n\n";
		cout << "Первое число: " << first << endl;
		cout << "Второе число: " << second << endl;
		cout << "Третье число: " << third << endl;
	};
	void plus_one()
	{
		cout << "\nУвеличение на 1\n";
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
		cout << "\nУвеличение на " << n << endl;
		hours+=n;
		minutes+=n;
		seconds+=n;
	}
	void print()
	{
		cout << "\n\nВЫВОД\n\n";
		cout << hours << ':' << minutes << ':' << seconds << endl;
	};

};
