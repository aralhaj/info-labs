#include "task.h"
#include <iostream>

using namespace std;

Time::Time(int x, int y)
{
    mins = x;
    secs = y;
}
Time::Time(Time &time)
{

    mins = time.mins;
    secs = time.secs;
}
Time::~Time()
{
    /*cout << " f " << endl;*/
}
void Time::setMins(int x)
{
    mins = x;
}
void Time::setSecs(int y)
{
    secs = y;
}
int Time::getMins()
{
    return mins;
}
int Time::getSecs()
{
    return secs;
}
Time &Time::operator=(const Time &t)
{
    if (&t == this)
        return *this;
    mins = t.mins;
    secs = t.secs;
    return *this;
}

Time Time::operator+(const Time &t)
{
    int temp1 = mins * 60 + secs;
    int temp2 = t.mins * 60 + t.secs;
    Time temp;
    temp.mins = (temp1 + temp2) / 60;
    temp.secs = (temp1 + temp2) % 60;
    return temp;
}
bool Time::operator==(const Time &t)
{
    return mins == t.mins && secs == t.secs;
}
ostream &operator<<(ostream &out, const Time &t)
{
    out << t.mins << ":" << t.secs << endl;
    return out;
}
istream &operator>>(istream &in, Time &t)
{
    cout << " mins? ";
    in >> t.mins;
    cout << " secs? ";
    in >> t.secs;
    return in;
}