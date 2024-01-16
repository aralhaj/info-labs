#include <iostream>
#include "vector.h"
#include "v.h"
#include "error.h"
using namespace std;

void main()
{
	setlocale(0, "");

	//1 implementation option

	try
	{
		vector x(5);// vector of two elements
		cout<<x;//printing vector x
		cout<<"Nomer? ";
		int i; cin >> i;
		//output of the element with the number i, if the number is larger than the size of the vector or less than 0, then error		cout << x[i] << endl;
		x + 4;
		cout << x[i] << endl;
		cout << x;
		//if the vector is empty or the size of the vector is less than the number of elements removed from it, then error		x-3; 
		cout << x;
	}

	//exception handler
	
	catch (int a)
	{
		if (a == 2) cout << "ERROR. [i] , i < 0 ";
		if (a == 3) cout << "ERROR. [i] , i >= size ";
		if (a == 4) cout << "ERROR. -n , size == 0 ";
		if (a == 5) cout << "ERROR. -n , size < n ";
	}
	system("pause");
	system("cls");

	//2 implementation option

	try
	{
		vector2 y(5);
		cout << y;
		cout << "Number?";
		int j; cin >> j;
		
		cout << y[j] << endl;
		y + 4;
		cout << y[j] << endl;
		cout << y;
	
		y - 3;
		cout << y;
	}
	// catch errors 
	catch (error e)
	{
		e.what();
	}
}