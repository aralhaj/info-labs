#include <iostream>
#include <cmath>
using namespace std;

class task
{
    double first;
    double second;

public:
    void init(double, double);
    void read();
    void print();
    double func();
};

void task::init(double a, double b)
{
    first = a;
    second = b;
}

void task::read()
{
    cout << "First: ";
    cin >> first;
    cout << "Second: ";
    cin >> second;
}

void task::print()
{
    cout << "\nFirst: " << first;
    cout << "\nSecond: " << second << "\n";
}

double task::func()
{
    if (second == 0)
    {
        return -1;
    }
    return floor(first / second);
}

task makeTask(double a, double b)
{
    task t;
    t.init(a, b);
    return t;
}

int main()
{
    double k;
    double first, second;

    cout << "First: ";
    cin >> first;
    cout << "Second: ";
    cin >> second;

    task b = makeTask(first, second);
    b.print();
    k = b.func();

    if (k != -1)
        cout << b.func() << " Result\n";
    else
        cout << "Error: Division by zero\n";

    b.read();
    b.print();
    k = b.func();

    if (k != -1)
        cout << b.func() << " Result\n";
    else
        cout << "Error: Division by zero\n";

    return 0;
}
