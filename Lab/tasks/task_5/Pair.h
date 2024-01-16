#pragma once
#include <iostream>
#include "object.h"

using namespace std;


class Pair:
	public  object
{
//constructor without parameters

public:
	Pair(void);
public:
	void show(); //function for viewing class attributes using a pointer

	//destructor
	virtual ~Pair(void);

	//constructor with parameters
	Pair(int, int);

	//copy constructor
	Pair(const Pair&);

	//selectors
	int getFirst();
	int getSecond();

	//modifiers
	void setFirst(int);
	void setSecond(int);

	//grafting overload
	Pair& operator=(const Pair&);

	//I/O overload
	friend ostream& operator<<(ostream& out, const Pair& t);
	friend istream& operator>>(istream& in, Pair& t);

	//methods for comparing pairs from the variant
	bool operator>(const Pair&);
	bool operator<(const Pair&);
	bool operator==(const Pair&);

	//attributes
protected:
	int first;
	int second;
};