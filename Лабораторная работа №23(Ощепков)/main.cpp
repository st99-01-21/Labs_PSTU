#include <iostream>
#include "lib.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	cout << "��������� 2 ������ ������ 10,����������� ������\n";
	list a(10), b(10);
	cout << "������� ������\n";
	cout << "a: ";
	cout << a << endl;
	cout << "b: ";
	cout << b << endl << endl;
	cout << "��������� ������\n";
	cin >> a;
	cin >> b;
	cout << "\n������� ������\n";
	cout << "a: ";
	cout << a << endl;
	cout << "b: ";
	cout << b << endl << endl;
	cout << "������ �� ������� � ������ b\n������� ������: ";
	int in;
	cin >> in;
	cout << "������� � " << in << " ��������: ";
	cout << b[in] << endl << endl;
	cout << "����������� ������� ������ �\n������ ������ �: ";
	cout << a() << endl << endl;
	cout << "�������� ��������� ������� a[i] + b[i]\n";
	a + b;
	cout << endl;
	cout << "������� ����� � �������� � ������� n\n";
	cout << "������� n\n";
	int n;
	cin >> n;
	a - n;



}