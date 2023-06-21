#include <C:\Users\amerb\Documents\Files\Uni\info\Lab\tasks\task_11\task_11.2\time.h> // task_11.2 time.h
#include <C:\Users\amerb\Documents\Files\Uni\info\Lab\tasks\task_11\task_11.2\time.cpp> // task_11.2 time.cpp
#include "vector.h"
#include <iostream>
using namespace std;

void main()
{
	Vector<Time>vec(5);
	vec.Print();

	Time temp;
	temp = vec.max();
	cout << temp << endl;
	vec.add(temp);
	vec.Print();
	int mini;
	mini = vec.min();
	cout << mini << endl;
	vec.remove(mini);
	vec.Print();
	vec.sred();
	temp = vec.sred();
	cout << temp << endl;
	vec.addSred(temp);
	vec.Print();
}