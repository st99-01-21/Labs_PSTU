#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

using namespace std;

void CountingSort(int* a, int* c, int n)
{
    for (int i = 0; i < 100; i++) {
        c[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        c[a[i]] = c[a[i]] + 1;
    }
    int i = 0;
    for (int j = 0; j < 100; j++) {
        while (c[j] != 0) {
            a[i] = j;
            c[j]--;
            i++;
        }
    }
}

void quicksort(int* mas, int first, int last)
{
    int mid, count;
    int f = first, l = last;
    mid = mas[(f + l) / 2]; //вычисление опорного элемента
    do
    {
        while (mas[f] < mid) f++;
        while (mas[l] > mid) l--;
        if (f <= l) //перестановка элементов
        {
            count = mas[f];
            mas[f] = mas[l];
            mas[l] = count;
            f++;
            l--;
        }
    } while (f < l);
    if (first < l) quicksort(mas, first, l);
    if (f < last) quicksort(mas, f, last);
}

int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    cout << "—ортировка подсчетом\n\n";
    int n;
    cout << "¬ведите n\n";
    cin >> n;
    int* a = new int[n];
    int* c = new int[100];
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 70 - 0;
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    CountingSort(a, c, n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "\n\nЅыстра€ сортировка\n\n";
    cout << "¬ведите n\n";
    cin >> n;
    int* b = new int[n];
    for (int i = 0; i < n; i++) {
        b[i] = rand() % 70 - 0;
    }
    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
    cout << endl;
    cout << "¬ведите первый номер\n";
    int first, last;
    cin >> first;
    cout << "¬ведите последний номер\n";
    cin >> last;
    quicksort(b, first, last);
    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}