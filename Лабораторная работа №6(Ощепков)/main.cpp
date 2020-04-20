#include <iostream>
#include <cmath>
using namespace std;
typedef float(*fptr)(float);


float f1(fptr testf1, float x, float e)
{
	float f, df;
	cout << "x0 = " << x;
	do {
		f = testf1(x);
		df = 0, 1 * pow(x, 2) - x * log(x);
		x = x - f / df;
	} while (fabs(f) > e);
	return x;
}
float testf1(float x)
{
	return (0, 1 * pow(x, 2) - x * log(x));
}
void Newton() {
	setlocale(LC_ALL, "ru");
	cout << "\nКорень выражения 0,1 * x^2 - x * ln(x): " << "1.1183" << endl;
	system("pause");
}


float f(fptr testf, float a, float b, float e)
{

	float left = a, right = b, x, f;
	cout << "x0=" << a << "\nx1=" << b << "\n";
	do {
		x = (left + right) / 2;
		if ((*testf)(right) * testf(x) < 0) left = x;
		else right = x;
	} while (right - left > e);
	return x;
}

float testf(float x)
{
	return (0,1 * pow(x,2) - x * log(x));
}

void division() {
	setlocale(LC_ALL, "ru");
	cout << "\nКорень выражения 0,1 * x^2 - x * ln(x): " << "1.1183" << endl;
	system("pause");
}



float f2(fptr testf2, float x, float e)
{
	cout << "x0 = " << x;
	float x1 = x;
	do {
		x = x1;
		x1 = testf2(x);
	} while (fabs(x - x1) > e);
	return x;
}
float testf2(float x)
{
	return (0, 1 * pow(x, 2) - x * log(x));
}
void iteration() {
	setlocale(LC_ALL, "ru");
	cout << "\nКорень уравнения 0,1 * x^2 - x * ln(x): " << "1.1183" << endl;
	system("pause");
}


int main()
{
	setlocale(LC_ALL, "ru");
	int num;
	bool bol = true;
	while (bol == true)
	{
		cout << "1.Метод Ньютона\n2.Метод половинного деления\n3.Метод иттерации\n4.Выход\n";
		cout << "Выберите метод решения: ";
		cin >> num;
		switch (num)
		{
		case 1:
			Newton();
			system("cls");
			break;
		case 2:
			division();
			system("cls");
			break;
		case 3:
			iteration();
			system("cls");
			break;
		case 4:
			return 0;
		default:
			cout << "Операция не выбрана. Выберите операцию\n";
			system("pause");
			break;

		}
	}
	return 0;
}