#include "vector.h"
#include <iostream>

using namespace std;

vector::vector(int s,int k)//constructor with parameters: allocates memory for s elements and fills them with the value k
{
	size = s;
	data = new int[size];
	for (int i = 0; i < size;i++)
	{
		data[i] = k;
	}
	beg = Iterator(); // creating a default iterator object
	end = Iterator();
	beg.elem = &data[0];
	end.elem = &data[size];
}
vector::vector(const vector& v)//copy constructor
{
	size = v.size;
	data = new  int[size];
	for (int i = 0; i < size;i++)
	{
		data[i] = v.data[i];
	}
	beg = v.beg;
	end = v.end;
}
vector::~vector()
{
	delete[] data;
	data = 0;
}
vector& vector::operator = (const vector& v)//assignment operation
{
	if (this == &v) return *this;
	size = v.size;
	data = new int[size];
	for (int i = 0; i < size;i++)
	{
		data[i] = v.data[i];
	}
	beg = v.beg;
	end = v.end;
	return *this;
}
int& vector::operator[](int index)//index access operation
{
	if (index < size) return data[index];
	else cout << "\nindex is larger than the size!\n";
}
vector vector::operator+(const int k)//operation of adding a constant
{
	vector temp(size);
	for (int i = 0; i < size; i++)
	{
		temp.data[i] = data[i] + k;
	}
	return temp;
}
int vector::operator()()//operation returning the length of the vector
{
	return size;
}
istream& operator>>(istream& in, vector& v)
{
	for (int i = 0; i < v.size;i++)
	{
		cout << "Enter the element: " << endl;
		in >> v.data[i] ;
	}
	return in;
}
ostream& operator<<(ostream& out, const vector& v)
{
	for (int i = 0; i < v.size;i++)
	{
		out << v.data[i]<<" ";
	}
	return out;
}