#include "Pair.h"
#include <iostream>
using namespace std;

Pair::Pair(void)
{
	first = 0;
	second = 0;
}
//destructor
Pair::~Pair(void)
{
}
//constructor with parameters
Pair::Pair(int ffirst, int ssecond)
{

	first = ffirst;
	second = ssecond;
}
//copy constructor
Pair::Pair(const Pair& t)
{
	first = t.first;
	second = t.second;
}
//selectors
int Pair::getFirst()
{
	return first;
}
int Pair::getSecond()
{
	return second;
}
//modifiers
void Pair::setFirst(int f)
{
	first = f;
}
void Pair::setSecond(int s)
{
	second = s;
}
//overloading privaivani
Pair& Pair::operator=(const Pair& t)
{
	if (this == &t) return *this;
	first = t.first;
	second = t.second;
	return *this;
}
//I/O overload
ostream& operator<<(ostream& out, const Pair& t)
{
	out << "\nthe first number in the pair = " << t.first;
	out << "\nthe second numbr in the pair = " << t.second;
	out << "\n";
	return out;
}
istream& operator>>(istream& in, Pair& t)
{
	cout << " Enter the first number in the pair "; in >> t.first;
	cout << " Enter the second number in the pair "; in >> t.second;
	return in;
}
//methods of comparing pairs from the variant
bool Pair::operator>(const Pair& t)
{
	return (first > t.first) || (first == t.first) && second > t.second;
}
bool Pair::operator<(const Pair& t)
{
	return (first < t.first) || (first == t.first) && second < t.second;
}
bool Pair::operator==(const Pair& t)
{
	return (first == t.first) && (second == t.second);
}
void Pair::show()
{
	cout << "The first number " << first <<endl;
	cout << "The second number " << second<< endl;
}