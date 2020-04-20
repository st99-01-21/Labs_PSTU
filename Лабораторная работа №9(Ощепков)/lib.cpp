#include <iostream>
#include <cmath>

using namespace std;

void rast_coord(int x1, int y1, int x2, int y2)
{
	int rast = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	cout << "Расстояние: " << rast << endl;
}

void min(int p, ...)
{
	int* k = &p;
	int min = p;
	for (; p != 0; p--)
	{
		if (p < min)
		{
			min = p;
		}
	}
	cout << "Минимальное:" << min << endl;
}

void mas(int key, int n, int *mass)
{
	for (int i = key; i < n; i++)
	{
		mass[i] = mass[i + 1];
	}
	n--;
	for (int i = 0; i < n; i++)
	{
		cout << mass[i] << ' ';
	}
	cout << endl;
}