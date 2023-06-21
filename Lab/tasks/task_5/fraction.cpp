#include "fraction.h"
#include  <iostream>

using namespace std;

// constructor without parameters
fraction::fraction(void)
{
	firstPart = 0;
	secondPart = 0;
}
// destructor
fraction::~fraction(void)
{
}
// constructor with parameters
fraction::fraction(int firstPart, int secondPart) :Pair(firstPart, secondPart)
{
	this->firstPart = firstPart;
	this->secondPart = secondPart;
}

// copy constructor
fraction::fraction(const fraction& t)
{
	firstPart = t.firstPart;
	secondPart = t.secondPart;
}
// selectors
int fraction::getFirstpart()
{
	return firstPart;
}
int fraction::getSecondpart()
{
	return  secondPart;
}
// modifiers
void fraction::setFirst(int  ffirst)
{
	firstPart = ffirst;
}
void fraction::setSecond(int ssecond)
{
	secondPart = ssecond;
}

// assignment overload
fraction& fraction::operator=(const fraction& t)
{
	if (this == &t) return *this;
	firstPart = t.firstPart;
	secondPart = t.secondPart;
	return *this;
}
//I/O overload
ostream& operator<<(ostream& out, const fraction& t)
{
	out << "\nInteger part of a number = " << t.firstPart;
	out << "\nFractional part of a number = " << t.secondPart;
	out << "\n";
	return out;
}
istream& operator>>(istream& in, fraction& t)
{
	cout << "Enter the integer part of the number: "; in >> t.firstPart;
	cout << "Enter the fractional part of the number "; in >> t.secondPart;
	return in;
}
// complete set of comparison methods
bool fraction::operator == (const fraction& t)
{
	double value1 = firstPart / secondPart;
	double value2 = t.firstPart / t.secondPart;
	return  value1 == value2;
}
bool  fraction::operator>(const fraction& t)
{
	double value1 = firstPart / secondPart;
	double value2 = t.firstPart / t.secondPart;
	return value1 > value2;
}
bool  fraction::operator<(const fraction& t)
{
	double value1 = firstPart / secondPart;
	double value2 = t.firstPart / t.secondPart;
	return value1 < value2;
}
void  fraction::show()
{
	cout << "The whole part " << firstPart << endl;
	cout << "Fractional part " << secondPart << endl;
}