#pragma once
#include <iostream>
#include <stack>
#include <vector>

template<class T>

class Vector
{
	stack <T> s;
	int len;
public:
	Vector();
	Vector(int n);
	Vector(const Vector<T>&);
	void Print();
	T Max();
	void Remove();
	T Min();
	void Add();
	T Srednee();
	void AddSred(T);
};

template <class T>

vector<T> copyStacktoVector(stack<T> s)
{
	vector<T> v;

	while (!s.empty())
	{
		v.push_back(s.top()); s.pop();
	}
	return v;
}

template <class T>
stack<T> copyVectortoStack(vector<T> v)
{
	stack<T> s;
	for (int i = 0;i < v.size();i++)
	{
		s.push(v[i]);
	}
	return s;
}

template <class T> 
Vector<T>::Vector()
{
	len = 0;
}

template <class T>
Vector<T>::Vector(int n)
{
	T a;
	for (int i = 0;i < n;i++)
	{
		cin >> a;
		s.push(a);
	}
	len = s.size();
}

template <class T>
Vector<T>::Vector(const Vector<T>& Vec)
{
	len = Vec.len;
    
	vector<T> v=copyStacktoVector(Vec.s);
    
	s=copyVectortoStack(v);
}

template <class T>
void Vector<T>::Print()
{
    
	vector<T> v = copyStacktoVector(s);
	while (!s.empty())
	{
		cout << s.top() << endl;
		s.pop();
	}
    
	s=copyVectortoStack(v);
}
template <class T>
T Vector<T>::Max()
{
	T m = s.top();
    
	vector<T> v=copyStacktoVector(s);
	while(!s.empty())
	{
		
		if(s.top()>m) m=s.top();
		s.pop();
	}
	s = copyVectortoStack(v);
	return m;
}
template <class T>
void Vector<T>::Remove()
{

	T m = Min();
	vector<T> v;
	T t;
	while (!s.empty())
	{
		t = s.top();
        
		if(!(t==m)) v.push_back(t);
		s.pop();
	}
    
	s = copyVectortoStack(v);
}
template <class T>
T Vector<T>::Min()
{
	T m = s.top();
	vector<T> v = copyStacktoVector(s);
	while (!s.empty())
	{
		if (s.top() < m)m = s.top();
		s.pop();
	}
	s = copyVectortoStack(v);
	return m;
}
template <class T>
void Vector<T>::Add()
{
	vector <T>v;
	T t;
	T el = Max();
	int i = 1;
	v.push_back(el);
	while (!s.empty())
	{
		t = s.top();
		v.push_back(t);
		s.pop();
        i++;
	}
	s = copyVectortoStack(v);
}
template <class T>
T Vector<T>::Srednee()
{
	vector<T> v = copyStacktoVector(s);
	int n = 1;
	T sum = s.top();
	s.pop();

	while (!s.empty())
	{
		sum = sum + s.top();
		s.pop();
		n++;
	}

	s=copyVectortoStack(v);
	return sum/n;
}
template <class T>
void Vector<T>::AddSred(T el)
{
	vector <T>v;
	T t;
	T e;
	int i = 1;
	while (!s.empty())
	{
		t = s.top();
		e = t + el;
		v.push_back(e);
		s.pop();
		i++;
	}
	s = copyVectortoStack(v);
};