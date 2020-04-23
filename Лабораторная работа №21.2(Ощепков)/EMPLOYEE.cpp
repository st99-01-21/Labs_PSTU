#include "EMPLOYEE.h"

EMPLOYEE::EMPLOYEE(void) : Person()
{
	salary = 0;
}
EMPLOYEE::~EMPLOYEE(void)
{

};
EMPLOYEE::EMPLOYEE(string n, int a, string p, double s) : Person(n, a)
{
	post = p;
	salary = s;
}
EMPLOYEE::EMPLOYEE(const EMPLOYEE& c)
{
	name = c.name;
	age = c.age;
	post = c.post;
	salary = c.salary;
}
void EMPLOYEE::set_post(string p)
{
	post = p;
}
void EMPLOYEE::set_salary(double s)
{
	salary = s;
}
void EMPLOYEE::salary_prize(double s)
{
	salary = s + (s * 0.1);// Оклад + премия(10% от оклада)
}

EMPLOYEE& EMPLOYEE::operator=(const EMPLOYEE& c)
{
	if (&c == this) { return *this; }
	name = c.name;
	age = c.age;
	post = c.post;
	salary = c.salary;
	return*this;
}
istream& operator>>(istream& in, EMPLOYEE& c)
{
	cout << "name:"; in >> c.name;
	cout << "age:"; in >> c.age;
	cout << "post:"; in >> c.post;
	cout << "salary:"; in >> c.salary;
	return in;
}
ostream& operator<<(ostream& out, const EMPLOYEE& c)
{
	out << "name:" << c.name << endl;
	out << "age:" << c.age << endl;
	out << "post:" << c.post << endl;
	out << "salary:" << c.salary << endl;
	return out;
}

