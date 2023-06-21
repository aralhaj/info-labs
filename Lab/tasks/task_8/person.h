#pragma once
#include "object.h"
#include <iostream>
#include <string>
using namespace std;
class person :
	public object
{
public:
	person();
	person(string,int);
	~person();
	person(const person&);
	person& operator=(const person&);

	string getName();
	int getAge();
	
    void setName(string);
	void setAge(int);
	
    void show();
	void input();
	
protected:
	string name;
	int age;
};