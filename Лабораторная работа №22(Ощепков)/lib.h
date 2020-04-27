#include <iostream>
#include <istream>

using namespace std;

class Money
{
public:
	long rub;
	int kop;

	Money() { rub = 0; kop = 0; };
	Money(long a, int b) { rub = a; kop = b; };
	Money(const Money& p) { rub = p.rub; kop = p.kop; };
	~Money() {};
	Money& operator=(const Money& p)//Операция присваивания
	{
		if (&p == this) return *this;
		rub = p.rub;
		kop = p.kop;
	}

	friend bool operator > (const Money& p, const Money& c)
	{
		if ((p.rub * 100 + p.kop) > (c.rub * 100 + c.kop)) return true;
		else return false;
	}
	friend bool operator < (const Money& p, const Money& c)
	{
		if ((p.rub * 100 + p.kop) < (c.rub * 100 + c.kop)) return true;
		else return false;
	}
	/*friend istream& operator >>(istream& in, Money& p)
	{
		cout << "Рубли: "; in >> p.rub;
		cout << "Копейки: "; in >> p.kop;
		return in;
	};*/

	friend ostream& operator <<(ostream& out,const Money& p)
	{
		return(out << p.rub << "," << p.kop << endl);
	}

	Money& operator++()
	{
		kop++;
		return *this;
	}

	Money operator++(int)
	{
		kop++;
		return *this;
	}
};
