#include  "time.h"
#include "vector.h" 
#include <iostream>
using namespace std;

void main()
{

	//initialization, input and output of vector values
	Vector<int>e(5,0);
	cin >> e;
	cout << e << endl;

	//initialization and output of vector values
	Vector <int>g(10,1);
	cout << g << endl;

	//assignment operations
	g=e;
	cout << g << endl;

	//index access
	cout <<e[2]<<endl;
	
    //getting the length of the vector 
	cout<<"size="<<e()<<endl;
	
    //addition operations with a constant
	g=e+10;
	cout << g << endl;

	system("pause");
	system("cls");
	Time t;
	cin >> t; 
	cout << t << endl;
	int k;
	cout << "k?";
	cin >> k;
	Time p;
	p = t + k;
	cout << p;
	system("pause");
	system("cls");
	cin >> t;
	cout << t;
	Vector<Time>A(5, t); cin >> A; cout << A << endl;
	Vector <Time>B(10, t); cout << B << endl;
	B = A;
	cout << B << endl; cout << A[2] << endl;
	cout << "size=" << A() << endl;
    
	//B = A + t;
	cout << B << endl;

}