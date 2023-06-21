#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

typedef vector<double>Vec;

Vec makeVector(int n)
{
	Vec v;
	for (int i = 0;i < n;i++)
	{
		double a = rand() % 100 - 50;
		v.push_back(a);
	}
	return v;
}

void printVector(Vec v)
{
	for (int i = 0;i < v.size();i++) cout << v[i] << " ";
	cout << endl;
}
int max(Vec v)
{
	int m = v[0];
	for (int i = 0; i < v.size();i++)
	{
		if (v[i] > m)
		{
			m = v[i];
		}
	}
	return m;
}
Vec add(Vec v, int m)
{
	v.insert(v.begin(), m);
	return v;
}
int min(Vec v)
{
	int m = v[0];
	int n = 0;
	for (int i = 0; i < v.size();i++)
	{
		if (v[i] < m)
		{
			m = v[i]; n = i;
		}
	}
	return n;
}
Vec  remove(Vec v, int n)
{
	v.erase(v.begin() + n);
	return v;
}
double srednee(Vec v)
{
	double sum = 0;
	for (int i = 0; i < v.size();i++)
	{
		sum += v[i];
	}
	sum /= v.size();
	return sum;
}
Vec addSrednee(Vec v, double sred)
{
	for (int i = 0; i < v.size();i++)
	{
		v[i] += sred;
	}
	return v;
}

void main()
{
	vector<double> v;
	vector<double>::iterator vi = v.begin();

	int n;
	cout << "Number ? ";
	cin >> n;
	v = makeVector(n);
	printVector(v);
    
	int maxi = max(v);
	cout << maxi << endl;
	v = add(v, maxi);
	printVector(v);
    
	int mini = min(v);

	cout << mini << endl;
	v = remove(v, mini);
	printVector(v);

	double sredn = srednee(v);
	cout << sredn << endl;
	v = addSrednee(v, sredn);
	printVector(v);
}