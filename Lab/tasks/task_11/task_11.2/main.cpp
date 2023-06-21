#include <iostream>
#include <vector>
#include <cstdlib>
#include "time.h"

using namespace std;

typedef vector<Time>Vec;

Vec makeVector(int n)
{
	Vec v;
	for (int i = 0;i < n;i++)
	{
		int a = rand() % 50;
		int b = rand() % 60;
		Time temp(a, b);
		v.push_back(temp);
	}
	return v;
}

void printVector(Vec v)
{
	for (int i = 0;i < v.size();i++) cout << v[i] << " ";
	cout << endl;
}
Time max(Vec v)
{
	Time max = v[0];
	for (int i = 1; i < v.size(); i++)
	{
		if (max < v[i]) max = v[i];
	}
	return max;
}
Vec add(Vec v, Time max)
{
	v.insert(v.begin(), max);
	return v;
}
int min(Vec v)
{
	Time min = v[0];
	int n = 0;
	for (int i = 1; i < v.size(); i++)
	{
		if (min > v[i]) { min = v[i]; n = i; }
	}
	return n;
}
Vec remove(Vec v, int n)
{
	v.erase(v.begin() + n);
	return v;
}

Time sred(Vec v)
{
	Time temp;
	for (int i = 0;i < v.size();i++)
	{
		temp = temp + v[i];
	}
	temp = temp / v.size();
	return  temp;
}

Vec addSred(Vec v, Time temp)
{
	for (int i = 0; i < v.size(); i++)
	{
		v[i] = v[i] + temp;
	}
	return v;
}
void main()
{
	srand(time(NULL));
	vector<Time> v;
    
	int n;
	cout << "Number ?";
	cin >> n;
	v = makeVector(n);
	printVector(v);
    
	Time temp = max(v);
	cout << temp << endl;
	v = add(v, temp);
	printVector(v);
    
	int mini = min(v);
	cout << mini << endl;
	v = remove(v, mini);
	printVector(v);
    
	Time temp1 = sred(v);
	cout << temp1 << endl;
	v = addSred(v, temp1);
	printVector(v);
}