#include <iostream>
#include <Windows.h>
#include "list.h"

using namespace std;

int main() {
    //�������������� ����
    setlocale(LC_ALL, "ru");
    try {
        int l;
        cout << "������� ����� ������(��� ������ ���� �� ������ 3)\n";
        cin >> l;
        List list(l);
        cout << "List:" << list << endl;
        cout << "��������� ������\n";
        cin >> list;

        int index;
        cout << "������� ����� ��������: "; cin >> index;
        // ����� �������� � ������� i, ���� ����� ������ 2 ��� ������ 0, �� //������������ �������������� ��������
        cout << list[index] << endl;
    }
    catch (int) {
        cout << "ERROR!!!" << endl;
    }
}
