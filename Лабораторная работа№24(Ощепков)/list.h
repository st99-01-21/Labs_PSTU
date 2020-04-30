#include <iostream>

using namespace std;

template <class T> // T - �������� �������

class list
{
private:
	int size; //������ ������
	T* data; // ��������� �� ������������ ������ �������� ������
public:
	list(int s);
	list(const list<T>& p);
	~list();

	list& operator=(const list<T>& p); //������������
	T& operator[](int index); //������ �� �������
	int operator()(); //��������� ����� ������
	friend istream& operator>> <>(istream& in, list<T>& p); //����     <> - �������� �� ��, ��� ������� �������� ��������
	friend ostream& operator<< <>(ostream& out, const list<T>& p); //�����
	void operator+(const list<T>& p);//�������� ��������� �������
};


template <class T>
list<T>::list(int s)
{
	size = s;
	data = new T[size];
	for (int i = 0; i < size; i++)
	{
		data[i] = 0;
	}
}

template <class T>
list<T>::list(const list& p)
{
	size = p.size;
	data = new T[size];
	for (int i = 0; i < size; i++)
	{
		data[i] = p.data[i];
	}
}

template <class T>
list<T>::~list()
{
	delete[] data;
	data = 0;
}

template <class T>
list<T>&list<T>::operator=(const list<T>& p)
{
	if (this == &p) return *this;
	size = p.size;
	if (data != 0) delete[] data;
	data = new T[size];
	for (int i = 0; i < size; i++)
	{
		data[i] = p.data[i];
	}
	return *this;
}

template <class T>
T&list<T>::operator[](int index)
{
	if (index < size) return data[index];
	else cout << "������ ������ ����� ������\n";
}

template <class T>
int list<T>::operator()()
{
	return size;
}

template <class T>
istream& operator>> (istream& in, list<T>& p)
{
	cout << "\n��������� " << p.size << " ���������\n";
	for (int i = 0; i < p.size; i++)
	{
		in >> p.data[i];
	}
	return in;
}

template <class T>
ostream& operator<< (ostream& out, const list<T>& p)
{
	for (int i = 0; i < p.size; i++)
	{
		out << p.data[i] << ' ';
	}
	return out;
}

template <class T>
void list<T>::operator+(const list<T>& p)
{
	cout << "������� ������: \n";
	int index;
	cin >> index;
	data[index] = data[index] + p.data[index];
	cout << "��������: " << data[index] << endl;
}