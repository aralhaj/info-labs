#include "time.h" 

Time::Time(void)
{
	mins = secs = 0;
}

Time::Time(int M, int S)
{
	mins = M;
    secs = S;
}

Time::Time(const Time& t)
{
	mins = t.mins;
    secs = t.secs;
}

Time& Time::operator =(const Time& t)
{
	mins = t.mins; secs = t.secs; return*this;
}

ostream& operator<<(ostream& out, const Time& t)
{

	out << t.mins << " : " << t.secs; return out;
}

istream& operator>>(istream& in, Time& t)
{
	cout << "\nmins? "; in >> t.mins; cout << "\nsecs? ";in >> t.secs; return in;
}

Time Time::operator+(Time k)
{
	int t = mins * 60 + secs;
	int kt = k.mins * 60 + k.secs; t += kt;
	Time temp(t / 60, t % 60); return temp;
}

Time Time::operator+(int k)
{
	int t = mins * 60 + secs;
	t += k;
	Time temp(t / 60, t % 60); return temp;
}