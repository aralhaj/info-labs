#include "person.h"
person::person()
{
	name = "";
	age = 0;
}
person::person(string n, int a)
{
		name = n;
		age = a;
}
person::~person()
{
}
person::person(const person& p)
{
	name = p.name;
	age = p.age;
}
person& person::operator=(const person& p)
{
	if (&p == this) return *this;
	name = p.name;
	age = p.age;
	return *this;
}
string person::getName()
{
	return name;
}
int person::getAge()
{
	return age;
}
void person::setName(string n)
{
	name = n;
}
void person::setAge(int a)
{
	age = a;
}
void person::show()
{
	cout << " Name: " << name << endl;
	cout << " Age: " << age << endl;
}
void person::input()
{
	cout << " Whats your name? "; cin >> name;
	cout << " How old are you ? "; cin >> age;
}