#include <iostream>
#include "lib.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	fraction fr;
	cout << "������� �����\n";
	cin >> fr.first;
	cout << "������� ���������� ������������ ����\n";
	cin >> fr.second;
	int col_d_m;
	cout << "������� ���������� ���� � ������\n";
	cin >> col_d_m;
	
	float summa = fr.summa(fr.first, fr.second, col_d_m);
	cout << "����������: " << summa << endl;
}