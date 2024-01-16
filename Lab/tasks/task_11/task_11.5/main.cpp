#include <C:\Users\amerb\Documents\Files\Uni\info\Lab\tasks\task_11\task_11.2\time.h> // task_11.2 time.h
#include <C:\Users\amerb\Documents\Files\Uni\info\Lab\tasks\task_11\task_11.2\time.cpp> // task_11.2 time.cpp

#include <iostream>
#include <stack> 
#include <vector>
#include "vector.h"

using namespace std;

void  main()
{
	Vector<Time>v(3);
	v.Print();
	cout << endl;
	v.Add();
	v.Print();
	cout << endl;
	v.Remove();
	v.Print();
	cout << endl;
	Time e;
	e = v.Srednee();
	v.AddSred(e);
	v.Print();
	cout << endl;
}