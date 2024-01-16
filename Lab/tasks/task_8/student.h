#pragma once
#include "object.h"
#include <iostream>
#include <string>
#include "person.h"

class student
	: public person
{
public:
	student();
	~student();
	void show();
	void input();
	
    student(string,int,float);
	student& operator=(const student&);
	student(const student&);

	void setRating(float);
	float getRating();
	
protected:
	float rating;
};