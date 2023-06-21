#include <C:\Users\amerb\Documents\Files\Uni\info\Lab\tasks\task_11\task_11.2\time.h> // task_11.2 time.h
#include <C:\Users\amerb\Documents\Files\Uni\info\Lab\tasks\task_11\task_11.2\time.cpp> // task_11.2 time.cpp
#include <iostream>
#include <stack> 
#include <vector>

using namespace std;

typedef stack<Time>St; 
typedef vector<Time>Vec;

Vec v;
St s;

St createStack(int n)
{
	St s;
	Time t;
	for (int i = 0;i < n;i++)
	{
		cin >> t;
		s.push(t);
	}
	return s;
}

Vec copyStacktoVector(St s)
{
	Vec v;
	while (!s.empty())
	{
		
		v.push_back(s.top());
		s.pop();
	}
	return v; 
}

St copyVectortoStack(Vec v)
{
	St s;
	for (int i = 0;i < v.size();i++)
	{
		s.push(v[v.size()-1-i]);
	}
	return s; 
}
void printStack(St s)
{
	v = copyStacktoVector(s);
	for (int i = 0;i < v.size();i++)
	{
		Time temp = v[v.size() - 1 - i];
		cout << temp <<" ";
	}
	cout << endl;
}
Time max(St s)
{
	v = copyStacktoVector(s);
	int n = s.size();
	Time m = s.top();
	s.pop();
	while (!s.empty())
	{
		if (m < s.top()) m = s.top();
		s.pop();
	}
	s = copyVectortoStack(v);
	return m;
}
Time min(St s)
{
	v = copyStacktoVector(s);
	int n = s.size();
	int a = 0;
	Time m = s.top();
	s.pop();
	while (!s.empty())
	{
		if (m > s.top()) 
			m = s.top();
		s.pop();
	}
	s = copyVectortoStack(v);
	return m;
}
Time sred(St s)
{
	v = copyStacktoVector(s);
	int n = s.size();
	Time m = s.top();
	s.pop();
	while (!s.empty())
	{
		m = m + s.top();
		s.pop();
	}
	m = m / n;
	s = copyVectortoStack(v);
	return m;
}
void add(St& s,Time time)
{
	Vec vv;
	Time t;
	while (!s.empty())
	{	
		t = s.top();
		vv.push_back(t);
		s.pop();
	}
	vv.push_back(time);
	s = copyVectortoStack(vv);
}
void remove(St& s, Time time)
{
	Time t;
	Vec vv;
	while (!s.empty())
	{
		t = s.top();
		
		if(!(t==time)) vv.push_back(t);
		s.pop();
	}
	s = copyVectortoStack(vv);
}
void addSred(St& s, Time time)
{
	Vec vv;
	Time temp;
	while (!s.empty())
	{
		temp = s.top() + time;
		vv.push_back(temp);
		s.pop();
	}
	s = copyVectortoStack(vv);
}
int main()
{
	int n;
	cout << "Number ?"; cin >> n;

	s = createStack(n);
	printStack(s);
	
    Time temp;
	temp = max(s);
	cout << temp << endl;
	
    add(s, temp);
	printStack(s);
	
    temp = min(s);
	cout << temp << endl;
	
    remove(s, temp);
	printStack(s);
	
    temp = sred(s);
	cout << temp << endl;
	
    addSred(s, temp);
	printStack(s);
	return 0;
}