#pragma once
#pragma once
#include "Person.h"
#include <string>
using namespace std;

class EMPLOYEE : public Person
{
public:
	EMPLOYEE(void);
	~EMPLOYEE(void);
	EMPLOYEE(string, int, string, double);
	EMPLOYEE(const EMPLOYEE&);
	string get_post() { return post; }
	double get_salary() { return salary; }
	void set_post(string);
	void set_salary(double);
	void salary_prize(double);
	EMPLOYEE& operator=(const EMPLOYEE&);
	friend istream& operator>>(istream& in, EMPLOYEE& p);
	friend ostream& operator<<(ostream& out, const EMPLOYEE& p);
	double salary;
protected:
	string post;

};

