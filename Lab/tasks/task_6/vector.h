#pragma once
#include <iostream>

using namespace std;

class Iterator
{
	friend class vector;//friendly class
public:
	Iterator()
	{ 
		elem = 0; 
	}//constructor without parameters
	Iterator(const Iterator& it)
	{
		elem = it.elem; 
	}//copy constructor
//overloaded comparison operations
	bool operator==(const Iterator& it)
	{
		return elem == it.elem; 
	} 
	bool operator!=(const Iterator& it) 
	{ 
		return elem != it.elem; 
	}
	//overloaded increment operation 
	Iterator operator++(int)
	{
		Iterator tmp(*this);
		++elem;
		return tmp;
	}
	//overloaded decrement operation
	Iterator operator--(int)
	{
		Iterator tmp(*this);
		--elem;
		return tmp;
	}
	//overloaded dereference operation
	int& operator *() const 
	{
		return*elem; 
	} 
private:
	int* elem;
};
class vector
{
public:
	vector(int s,int k=0);//constructor with parameters: allocates memory for s elements and fills them with the value of k

	vector(const vector&);//copy constructor
	
    ~vector();
	
    vector& operator = (const vector&);//assignment operation
    int& operator[](int index);//index access operation
	
    vector operator+(const int k);//the operation of adding a constant
	int operator()();//an operation that returns the length of a vector

	friend istream& operator>>(istream&, vector&);
	friend ostream& operator<<(ostream&, const vector&);

	Iterator first()
	{
		return beg;
	}
	Iterator last()
	{
		return end;
	}
private:
	int size;
	int* data;//pointer to a dynamic array of vetkor values
	Iterator beg;
	Iterator end;
};
