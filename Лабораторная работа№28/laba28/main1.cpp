#include <deque>
#include <iostream>
#include <cstdlib>
#include <iterator>

using namespace std;

typedef deque<int>turn; //���������� ��� ��� ������ � ��������

turn make_turn(int deque_size)
{
	turn deq(deque_size); //������ �������
	cout << "��������� �������\n";
	for (int i = 0; i < deq.size(); i++)
	{
		cin >> deq[i];
	}
	return deq;
}

void print_turn(turn deq)
{
	for (int i = 0; i < deq.size(); i++)
	{
		cout << deq[i] << ' ';
	}
	cout << endl;
}

int search_max(turn deq)
{
	int max = deq[0];
	for (int i = 1; i < deq.size(); i++)
	{
		if (deq[i] > max)
		{
			max = deq[i];
		}
	}
	return max;
}

turn delete_elem(turn deq, int index)
{
	int* arr = new int[index];
	for (int i = 0; i < index; i++)
	{
		arr[i] = deq[0];
		deq.pop_front();
	}
	deq.pop_front();
	for (int i = index - 1; i >= 0; i--)
	{
		deq.push_front(arr[i]);
	}
	return deq;
}

turn umn_elem_max(turn deq)
{
	int max = search_max(deq);
	for (int i = 0; i < deq.size(); i++)
	{
		deq[i] *= max;
	}
	return deq;
}



int main()
{
	setlocale(LC_ALL, "ru");
	try
	{
		deque<int> deq;

		deque<int>::iterator deq1 = deq.begin();
		cout << "������� ������ �������\n";
		int deque_size;
		cin >> deque_size;
		deq = make_turn(deque_size);
		cout << "\n������� ������������� � ������\n";
		int max = search_max(deq);
		deq.push_front(max);
		print_turn(deq);
		cout << "\n������� ������ ��� ��������\n";
		int index; cin >> index;
		deq = delete_elem(deq, index);
		print_turn(deq);
		cout << "\n��������� ������� �������� �� ������������ ������� ����������\n";
		deq = umn_elem_max(deq);
		print_turn(deq);
	}
	catch (int)
	{
		cout << "ERROR!\n";
	}
}
