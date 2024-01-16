#include "Pair.h" #include < iostream>
using namespace std;

Pair::Pair(void)
{
	first = 0;
	second = 0;
}

Pair::~Pair(void)
{
}

Pair::Pair(int ffirst, int ssecond)
{

	first = ffirst;
	second = ssecond;
}

Pair::Pair(const Pair &t)
{
	first = t.first;
	second = t.second;
}

int Pair::get_first()
{
	return first;
}
int Pair::get_second()
{
	return second;
}

void Pair::set_first(int ffirst)
{
	first = ffirst;
}
void Pair::set_second(int ssecond)
{
	second = ssecond;
}

Pair &Pair::operator=(const Pair &t)
{
	if (this == &t)
		return *this;
	first = t.first;
	second = t.second;
	return *this;
}

ostream &operator<<(ostream &out, const Pair &t)
{
	out << "\nThe first number in a pair = " << t.first;
	out << "\nThe second number in a pair = " << t.second;
	out << "\n";
	return out;
}
istream &operator>>(istream &in, Pair &t)
{
	cout << " Enter the first number in the pair ";
	in >> t.first;
	cout << " Enter the second number in the pair ";
	in >> t.second;
	return in;
}

bool Pair::operator>(const Pair &t)
{
	return (first > t.first) || (first == t.first) && second > t.second;
}
bool Pair::operator<(const Pair &t)
{
	return (first < t.first) || (first == t.first) && second < t.second;
}
bool Pair::operator==(const Pair &t)
{
	return (first == t.first) && (second == t.second);
}