#include <iostream>
#include "lib.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	cout << "������� ����\n";
	triad base;
	base.print();
	base.plus_one();
	base.print();
	cout << "\n����������� �����\n";
	time derive;
	derive.print();
	int n;
	cout << "������� n\n";
	cin >> n;
	derive.plus_n(n);
	derive.print();
}


