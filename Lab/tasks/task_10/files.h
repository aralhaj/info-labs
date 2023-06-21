#pragma once
#include <iostream>
#include <fstream>
#include <iostream>
#include "time.h"

using namespace std;

int makeFile(const char* f_name)
{
	fstream stream(f_name, ios::out | ios::trunc); 
	if (!stream)return -1;
	int n;
	Time p;
	cout << "Home many? ";
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> p;
		stream << p << "\n";
	}
	stream.close();
	return n;
}
int printFile(const char* f_name)
{
	fstream stream(f_name, ios::in);
	if(!stream)return -1;
	Time p;
	int i = 0;
	while (stream >> p)
	{
		cout << p << "\n"; i++;
	}
	stream.close();
	return i;
}
int removeFile(const char* f_name, Time k)
{
	fstream temp("temp", ios::out);
	fstream stream(f_name,ios::in);
	if(!stream)return -1;
	int i = 0;
	Time p;
	while (stream >> p)
	{
		
		if (stream.eof()) break;
		i++;

		if(!(p==k)) temp<<p;
	}

	stream.close(); temp.close();
	remove(f_name);
	rename("temp", f_name);
	return i;
}
int addFile(const char* f_name, int k,int nom)
{
	fstream temp("temp", ios::out);
	fstream stream(f_name,ios::in);
	if(!stream)return -1;
	Time p;
	int i = 0;
	int j = 0;
	bool f=false;
	while (stream >> p)
	{
		if (stream.eof())break; i++;
		temp << p;
		if (i == nom)
		{
			for (int j = 0; j < k;j++)
			{
				cin >> p;
				temp << p;
				f = true;
			}
		}
	}
	stream.close();
	temp.close();
	remove(f_name);
	rename("temp", f_name);
	if (f==false) return -2;
	return 1;
}
int changeFile(const char* f_name, Time pp)
{
	fstream temp("temp", ios::out);
	fstream stream(f_name,ios::in);
	if(!stream)return -1;
	Time p;
	Time p1(1, 30);
	int i = 0, l = 0;
	while (stream >> p)
	{
		if (stream.eof())break;
		i++;
		if (p==pp)
		{
			p = p + p1;
			l++;
		}
		temp << p;
	}
	stream.close();
	temp.close();
	remove(f_name);
	rename("temp", f_name);
	return l;
}
