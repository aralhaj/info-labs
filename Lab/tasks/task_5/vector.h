#pragma once
#include "object.h"
#include <iostream>
using namespace std;

class vector:
	public object
{
public:
	void show();
	~vector(void);
	vector(int);
	vector(void);
	void Add(object*);//adding an element to a vector
	friend ostream& operator<<(ostream& out, const vector& v);
private:
	object** beg;
	int size;
	int cur;
};