#include <iostream>
#include "list.h"
#include "Money.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	cout << "�����-���������\n\n";
	cout << "������� ��� ������ ��������� 5, ����������� int ����������\n";
	list<int>a(5), b(5);
	cout << "��������� ������\n";
	cin >> a;
	cin >> b;
	cout << "������� ������\n";
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

	cout << "������� ��� ������ ��������� 5, ����������� float ����������\n";
	list<float>c(5), d(5);
	cout << "��������� ������\n";
	cin >> c;
	cin >> d;
	cout << "������� ������\n";
	cout << "a: ";
	cout << c << endl;
	cout << "b: ";
	cout << d << endl << endl;
	cout << "������ �� ������� � ������ b\n������� ������: ";
	cin >> in;
	cout << "������� � " << in << " ��������: ";
	cout << d[in] << endl << endl;
	cout << "����������� ������� ������ �\n������ ������ �: ";
	cout << c() << endl << endl;
	cout << "�������� ��������� ������� a[i] + b[i]\n";
	c + d;
	cout << endl;

	cout << "������� ��� ������ ��������� 5, ����������� double ����������\n";
	list<double>e(5), f(5);
	cout << "��������� ������\n";
	cin >> e;
	cin >> f;
	cout << "������� ������\n";
	cout << "a: ";
	cout << e << endl;
	cout << "b: ";
	cout << f << endl << endl;
	cout << "������ �� ������� � ������ b\n������� ������: ";
	cin >> in;
	cout << "������� � " << in << " ��������: ";
	cout << f[in] << endl << endl;
	cout << "����������� ������� ������ �\n������ ������ �: ";
	cout << e() << endl << endl;
	cout << "�������� ��������� ������� a[i] + b[i]\n";
	e + f;
	cout << endl;

	cout << "\n���������������� �����\n\n";

	cout << "�������� ����� Money\n";
	long rub;
	int kop;
	cout << "�����: "; cin >> rub;
	cout << "�������: "; cin >> kop;
	Money q(rub,kop);
	cout << "�����\n";
	cout << q;

	cout << "\n\n���������, ���������� �������� ����������������� ������\n\n";
	cout << "������� ��� ������ ��������� 5, ����������� Money ����������\n";
	list<Money>w(5), r(5);
	cout << "��������� ������\n";
	cin >> w;
	cin >> r;
	cout << "������� ������\n";
	cout << "a: ";
	cout << w << endl;
	cout << "b: ";
	cout << r << endl << endl;
	cout << "������ �� ������� � ������ b\n������� ������: ";
	cin >> in;
	cout << "������� � " << in << " ��������: ";
	cout << r[in] << endl << endl;
	cout << "����������� ������� ������ �\n������ ������ �: ";
	cout << w() << endl << endl;
	cout << "�������� ��������� ������� a[i] + b[i]\n";
	w + r;
	cout << endl;

}