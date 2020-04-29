#include <iostream>

using namespace std;

class iterator1
{
	friend class list; //c������ ����� list �������������
private:
	int* elem;
public:
	iterator1() { elem = 0; };
	iterator1(const iterator1& p) { elem = p.elem; };

};
class list
{
private:
	int size; //������ ������
	int* data; // ��������� �� ������������ ������ �������� ������
	iterator1 beg; //��������� �� ������ ������� ������
	iterator1 end; //��������� �� ������� ��������� �� ���������
	iterator1 uk_elem; //��������� �� ������ ���
public:
	list(int s);
	list(const list& p);
	~list();

	list& operator=(const list& p); //������������
	int& operator[](int index); //������ �� �������
	int operator()(); //��������� ����� ������
	friend istream& operator>>(istream& in, list& p); //����
	friend ostream& operator<<(ostream& out, const list& p); //�����
	void operator+(const list& p);//�������� ��������� �������
	//-n ������� ����� � �������� � ������� n
	iterator1 first() { return beg; };
	iterator1 last() { return end; };
	iterator1 operator-(int n)
	{
		end.elem -= n;
		cout << *end.elem;
		return uk_elem;
	}
};

list::list(int s)
{
	size = s;
	data = new int[size];
	data[0] = 0;
	for (int i = 1; i < size; i++)
	{
		data[i] = 0;
	}
	beg.elem = &data[0];
	end.elem = &data[size];
}

list::list(const list& p)
{
	size = p.size;
	data = new int[size];
	for (int i = 0; i < size; i++)
	{
		data[i] = p.data[i];
	}
	beg = p.beg;
	end = p.end;
}

list::~list()
{
	delete[] data;
	data = 0;
}

list&list::operator=(const list& p)
{
	if (this == &p) return *this;
	size = p.size;
	if (data != 0) delete[] data;
	data = new int[size];
	for (int i = 0; i < size; i++)
	{
		data[i] = p.data[i];
	}
	beg = p.beg;
	end = p.end;
	return *this;
	
}

int& list::operator[](int index)
{
	if (index < size) return data[index];
	else cout << "������ ������ ����� ������\n";
}

int list::operator()()
{
	return size;
}

istream& operator>>(istream& in, list& p)
{
	cout << "��������� " << p.size << " ���������\n";
	for (int i = 0; i < p.size; i++)
	{
		in >> p.data[i];
	}
	return in;
}

ostream& operator<<(ostream& out, const list& p)
{
	for (int i = 0; i < p.size; i++)
	{
		out << p.data[i] << ' ';
	}
	return out;
}

void list::operator+(const list& p)
{
	cout << "������� ������: \n";
	int index;
	cin >> index;
	data[index] += p.data[index];
	cout << "��������: " << data[index] << endl;
}