#pragma once
#include "Pair.h"

// the fraction class inherits from the Pair class
class fraction :
	public Pair
{
public:

    // function for viewing class attributes using a pointer
	void show();

	// constructor without parameters
	fraction(void);

	// destructor
	~fraction(void);

	// constructor with parameters
	fraction(int, int);
	fraction(const fraction&);

	// selectors
	int getFirstpart();
	int getSecondpart();

	// modifiers
	void setFirst(int);
	void setSecond(int);

	// grafting overload
	fraction& operator=(const fraction&);

	// I/O overload
	friend ostream& operator<<(ostream& out, const fraction& t);
	friend istream& operator>>(istream& in, fraction& t);

	// complete set of comparison methods
	bool operator == (const fraction&);
	bool operator>(const fraction&);
	bool operator<(const fraction&);

protected:
	// fractional parts
	int firstPart;
	int secondPart;
};
