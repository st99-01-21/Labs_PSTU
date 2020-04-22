#include <iostream>
#include "lib.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	fraction fr;
	cout << "¬ведите оклад\n";
	cin >> fr.first;
	cout << "¬ведите количество отработанных дней\n";
	cin >> fr.second;
	int col_d_m;
	cout << "¬ведите количество дней в мес€це\n";
	cin >> col_d_m;
	
	float summa = fr.summa(fr.first, fr.second, col_d_m);
	cout << "Ќачисление: " << summa << endl;
}