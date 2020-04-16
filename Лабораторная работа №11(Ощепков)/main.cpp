#include <iostream>
#include <string>

using namespace std;

struct video_cassette
{
	string name;
	string producer;
	int duration;
	float price;
};
int n;
video_cassette* arr = nullptr;

void create_arr();
void delete_elem(float price_max);
void new_elem();
void print_arr();

int main()
{
	setlocale(LC_ALL, "ru");
	cout << "������� ���������� �������\n";
	cin >> n;
	arr = new video_cassette[n + 3];
	create_arr();
	cout << "������� ����\n\n";
	float price_max;
	cin >> price_max;
	delete_elem(price_max);
	print_arr();
	new_elem();
	print_arr();
}

void create_arr()
{
	cout << "��������� ���������\n\n";
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << endl;
		cout << "�������� ������: ";
		cin >> arr[i].name;
		cout << "��������: ";
		cin >> arr[i].producer;
		cout << "�����������������(���): ";
		cin >> arr[i].duration;
		cout << "����: ";
		cin >> arr[i].price;
		cout << endl;
	}
}

void delete_elem(float price_max)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i].price > price_max)
		{
			for (int j = i; j < n - 1; j++)
			{
				arr[i].name = arr[i + 1].name;
				arr[i].producer = arr[i + 1].producer;
				arr[i].duration = arr[i + 1].duration;
				arr[i].price = arr[i + 1].price;
			}
			n--;
		}
	}
}

void new_elem()
{
	n += 3;
	cout << " ������� ��� 3 ��������\n\n";
	for (int k = n - 3; k < n; k++)
	{
		cout << "�������� ������: ";
		cin >> arr[k].name;
		cout << "��������: ";
		cin >> arr[k].producer;
		cout << "�����������������(���): ";
		cin >> arr[k].duration;
		cout << "����: ";
		cin >> arr[k].price;
	}
}

void print_arr()
{
	cout << "\n\n�����\n\n";
	for (int j = 0; j < n; j++)
	{
		cout << j + 1 << endl;
		cout << "�������� ������: " << arr[j].name << endl;
		cout << "��������: " << arr[j].producer << endl;
		cout << "�����������������(���): " << arr[j].duration << endl;
		cout << "����: " << arr[j].price << endl;;
		cout << endl;
	}
}