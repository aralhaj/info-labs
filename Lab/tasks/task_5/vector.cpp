#include "vector.h"
#include <iostream>
vector::~vector(void)
{
	if (beg != 0) delete[] beg;
	beg = 0;
}
vector::vector(int n)
{
	beg = new object*[n];
	size = n;
	cur = 0;
}
vector::vector(void)
{
	beg = 0;
	size = 0;
	cur = 0;
}
//adding an element to a vector
void vector::Add(object*p)
{
	if (cur < size)
	{
		beg[cur] = p;
		cur++;
	}
}
ostream& operator<<(ostream& out, const vector& v)
{
	if (v.size == 0) out << "Empty " << endl;
	object** p = v.beg;//pointer of type object
	for (int i = 0; i < v.cur;i++)
	{
		cout << i + 1 << " Element" << endl;
		(*p)->show();
		p++;
		cout << endl;
	}
	return out;
}
void vector::show()
{
	cout << "Size " << size << endl;
	cout << "index of the current element " << cur << endl;
}