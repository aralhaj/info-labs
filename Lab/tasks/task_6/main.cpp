#include <iostream>
#include "vector.h"

using namespace std;

int main()
{
	setlocale(0, "");
	vector v(5);
	cout << "vector v " << endl ;
	cout << v << endl << "==================================" << endl;
	cin >> v;
	cout << "vector V " << endl;
	cout << v << endl << "==================================" << endl;
	v[2] = 100;
	cout << "vector V[2]=100 " << endl;
	cout << v << endl << "==================================" << endl;
	vector a(10);
	cout << "vector A "  << endl;
	cout << a << endl << "==================================" << endl;
	a = v;
	cout << "vector A = vector V "<<endl;
	cout << a << endl << "==================================" << endl;
	vector c(10);
	c = a + 10;
	cout << "vector C = A + 10 " << endl;
	cout << c << endl << "==================================" << endl;
	cout << " length C = " << c()<<endl;
	system("pause");
	system("cls");
	//dereference the value that a.first() returns and output it
	cout << " The first element : " << endl;
	cout<<*(a.first())<<endl;
    //we set a variable of type Iterator to the first element of vector a with
    //using the first method
	Iterator i=a.first();
	//increment operation
	cout << " increment, the second element : " << endl;
	i++;
	//dereferences the iterator and outputs its value 
	cout<<*i<<endl;
	//output the values of the vector elements using the iterator 
	cout << " values of vector elements using an iterator "<<endl;
	for( i=a.first();i!=a.last();i++)
		cout<<*i<<endl;
}