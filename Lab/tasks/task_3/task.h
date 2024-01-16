#pragma once
#include <iostream>

class Time
{
private:
    int mins, secs;

public:
    Time(int m = 0, int s = 0)
    {
        mins = m;
        secs = s;
    };
    Time(Time &t)
    {
        mins = t.mins;
        secs = t.secs;
    };
    ~Time();

    void setMins(int m) { mins = m; };
    void setSecs(int s) { secs = s; };

    int getMins() { return mins; };
    int getSecs() { return secs; };

    Time operator+(const Time &);
    bool operator==(const Time &);
    friend istream &operator>>(istream &in, Time &t);
    friend ostream &operator<<(ostream &out, const Time &t);
};