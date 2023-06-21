#pragma once
#include <string>
#include <iostream>

using namespace std;

class error
{
string str;
public:
	//constructor, initiates the str attribute with an error message
	error(string s){str=s;}
	void what() { cout << str << endl; } //outputs the value of the str attribute
};