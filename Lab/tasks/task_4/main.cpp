#include "Pair.h"
#include "fraction.h"
#include <iostream>
#include <windows.h>

using namespace std;

void f1(Pair &c)
{
	c.set_first(993);
}
Pair f2()
{
	fraction l(123, 321);
	return l;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Pair a;
	cin >> a;
	cout << " a " << a;
	Pair b(93, 12);
	cout << " b " << b;

	cout << "============ Checking comparison methods ============ " << endl;
	if (a > b)
		cout << " a is greater than b " << endl;
	else if (a < b)
		cout << " a is less than b " << endl;
	else if (a == b)
		cout << " a = b " << endl;
	a = b;
	cout << "============ Checking the assignment works ============ " << endl
		 << " a " << a;

	cout << "============ Working with fraction ============ " << endl;
	fraction c;
	cin >> c;
	cout << " c " << c;
	fraction d(90, 9);
	cout << " d " << d;

	cout << "============ Checking comparison methods ============ " << endl;
	if (c > d)
		cout << "Fraction c is greater than d " << endl;
	else if (c < d)
		cout << " Fraction c is less than d " << endl;
	else if (c == d)
		cout << " Fraction c is equal to d " << endl;

	cout << "============ Functions that receive and return an object of the base class, the principle of substitution ============ " << endl;
	f1(b);
	cout << " b " << b;
	// a  -  Pair,  f2() return - fraction,but a still Pair
	a = f2();
	cout << " a " << a;
}