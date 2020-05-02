#include "Money_and_file_work.h"
#include <iostream>
#include <fstream>


using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	Money p;
	int k, c;//k - ���������� ��������� � - ����� ������
	char f_name[30];
	Money tmp;
	do
	{
		cout << "1.�������� �����\n2.������ �����\n3.�������� ������� ������ ��������� ��������\n4.���������� ���� ������� � �������� ��������� � 2 ����\n5.���������� � ������� ����� �������� � �������� �������\n6.�����\n\n";
		cin >> c;
		cout << endl;
		switch (c)
		{
		case 1:
			cout << "������� ��� �����\n"; cin >> f_name;
			k = make_file(f_name);
			if (k < 0) cout << "���������� ������� ����\n";
			cout << endl;
			break;
		case 2:
			cout << "������� ��� �����, ������� ������ ����������\n"; cin >> f_name;
			k = print_file(f_name);
			if (k < 0) cout << "���������� ��������� ����\n";
			if (k == 0) cout << "���� ������\n";
			cout << endl;
			break;
		case 3:
			cout << "������� ��� �����\n"; cin >> f_name;
			cout << "������� ��������\n";
			cin >> tmp;
			k = del_file(f_name, tmp);
			if (k < 0) cout << "���������� ��������� ����\n";
			if (k == 0) cout << "���� ������\n";
			cout << endl;
			break;
		case 4:
			cout << "������� ��� �����\n"; cin >> f_name;
			cout << "������� ��������\n";
			cin >> tmp;
			k = um_zap_file(f_name, tmp);
			if (k < 0) cout << "���������� ��������� ����\n";
			if (k == 0) cout << "���� ������\n";
			cout << endl;
			break;
		case 5:
			cout << "������� ��� �����\n"; cin >> f_name;
			cout << "������� �����\n";
			int number;
			cin >> number;
			cout << "������� ���������� ����� �������\n";
			int col;
			cin >> col;
			Money* arr = new Money[col];
			for (int i = 0; i < col; i++)
			{
				cout << "������� " << i + 1 << " ������\n";
				cin >> arr[i];
			}
			k = add_file(f_name, number, col, arr);
			if (k < 0) cout << "���������� ��������� ����\n";
			if (k == 0) k = add_file(f_name, number, col, arr);
			cout << endl;
			break;
		}
	} while (c != 6);
}