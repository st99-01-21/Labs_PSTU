#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

void rast_coord(int x1, int y1, int x2, int y2);
void min(int p, ...);
void mas(int key, int n, int *mass);

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "ru");
	int k;
	do
	{
		cout << "1.Расстояние между двумя точками\n2.Минимальный элемент в списке параметров\n3.Удаление элемента из динамического массива\n4.Выход\n";
		cin >> k;
	

		switch (k)
		{
		case 1:
			int x1, x2, y1, y2;
			cout << "Введите координаты первой точки\n";
			cin >> x1 >> y1;
			cout << "Введите координаты второй точки\n";
			cin >> x2 >> y2;
			rast_coord(x1, y1, x2, y2);
			break;
		case 2:
			int p;
			cout << "Введите количество параметров\n";
			cin >> p;
			min(p);
			break;
		case 3:
			int key, n;
			cout << "Введите длину массива\n";
			cin >> n;
			int* mass = new int[n];
			for (int i = 0; i < n; i++)
			{
				mass[i] = rand() % 71 - 40;
				cout << mass[i] << ' ';
			}
			cout << endl;
			cout << "Введите индекс элемента для удаления\n";
			cin >> key;
			mas(key, n, mass);


		}
		
	} while (k != 4);

}