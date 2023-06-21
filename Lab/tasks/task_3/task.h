#pragma once
#include <iostream>

class Time
{
private:
    int mins;
    int secs;

public:
    Time();
    Time(int, int);
    Time(Time& time);
    ~Time();

    void setMins(int);
    void setSecs(int);

    int getMins();
    int getSecs();

    Time& operator=(const Time&);
    Time operator+(const Time&);
    bool operator==(const Time&);

    friend ostream& operator<<(ostream& out, const Time& t);
    friend istream& operator>>(istream& in, Time& t);
};