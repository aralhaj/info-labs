#include "student.h"
student::student():person()
{
	rating = 0;
}
student::~student()
{
}
void student::show()
{
	cout << " Name - " << name << endl;
	cout << " Age - " << age << endl;
	cout << " Рейтинг - " << rating << endl;
}
void student::input()
{
	cout << " name? "; cin >> name;
	cout << " Age? "; cin >> age;
	cout << " Rating? ";  cin >> rating;
}
student::student(string n, int a, float r)
{
	name = n;
	age = a;
	rating = r;
}
student& student::operator=(const student& s)
{
	if (&s == this) return *this;
	name = s.name;
	age = s.age;
	rating = s.rating;
	return *this;
}
student::student(const student& s)
{
	name = s.name;
	age = s.age;
	rating = s.rating;
}
void student::setRating(float r)
{
	rating = r;
}
float student::getRating()
{
	return rating;
}