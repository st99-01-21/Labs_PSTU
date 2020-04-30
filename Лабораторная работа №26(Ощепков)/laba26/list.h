#include <iostream>
#include <Windows.h>
using namespace std;
using namespace std;
const int maxSize = 3;

class Iterator {
    friend class Vector; // ������������� �����

public:
    int* element; // ��������� �� ������� ���� int
public:
    Iterator() { element = 0; } // ����������� ��� ����������
    Iterator(const Iterator& iterator) { element = iterator.element; } // ����������� �����������
};

class List {
private:
    int size; // ������ �������
    int* data;// ��������� �� ������������ ������ �������� �������
    Iterator beg;
    Iterator end;

public:
    List(int = 0, int = 0); // ����������� � �����������: �������� ������ ��� size ��������� � ��������� �� ��������� data
    List(const List&); // ����������� �����������
    ~List(); // ����������

    List& operator =(const List&); // �������� ������������
    int& operator [](int); // �������� ������� �� �������
    int operator ()(); // ��������, ������������ ����� �������

    friend ostream& operator <<(ostream& out, List const&);
    friend istream& operator >>(istream& in, List&);

    Iterator first() { return beg; }
    Iterator last() { return end; }
};
List::List(int size, int data) {
    if (size > maxSize) throw 1;

    this->size = size;
    this->data = new int[size];
    for (int i = 0; i < size; i++) this->data[i] = data;

    beg.element = &this->data[0];
    end.element = &this->data[size - 1];
}

List::List(const List& list) {
    size = list.size;
    data = new int[size];
    for (int i = 0; i < size; i++) data[i] = list.data[i];
    beg = list.beg;
    end = list.end;
}

List::~List() {
    delete[] data;
    data = 0;
}

List& List::operator =(const List& list) {
    if (this == &list) return *this;
    size = list.size;

    if (data != 0) delete[]data;
    data = new int[size];
    for (int i = 0; i < size; i++) data[i] = list.data[i];

    beg = list.beg;
    end = list.end;

    return *this;
}

int& List::operator [](int index) {
    if (index < 0) throw 2;
    if (index >= size) throw 3;
    return data[index];
}

int List::operator ()() {
    return size;
}

ostream& operator <<(ostream& out, const List& list)
{
    for (int i = 0; i < list.size; i++) out << list.data[i] << " ";
    return out;
}

istream& operator >>(istream& in, List& list) {
    if (list.size > maxSize) throw 1;
    for (int i = 0; i < list.size; i++) in >> list.data[i];
    return in;
}
