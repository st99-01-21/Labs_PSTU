#include <iostream>
using namespace std;

unsigned long long int f(int n)
{
    if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;

    return f(n - 1) + f(n - 2);
}
// 1, 1, 2, 3, 5, 8, 13, 21, Е
int main()
{
    setlocale(LC_ALL, "ru");
    int n;
    cout << "¬ведите n\n";
    cin >> n;
    cout << f(n) << endl;
    return 0;
}