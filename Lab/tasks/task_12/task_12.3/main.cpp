#include <iostream>
#include <map>
#include <C:\Users\amerb\Documents\Files\Uni\info\Lab\tasks\task_12\task_12.2\time.h> // task_12.2 time.h
#include <C:\Users\amerb\Documents\Files\Uni\info\Lab\tasks\task_12\task_12.2\time.cpp> // task_12.2 time.cpp
#include <iostream>
#include "vector.h"

using namespace std;

int main()
{
    Vector<Time> container(3);
    setlocale(0, "");
    int n;
    container.Print();
    cout << endl;

    Time a = container.max();
    container.add(a);
    container.Print();
    cout << endl;

    int b = container.min();
    container.remove(b);
    container.Print();
    cout << endl;

    Time c = container.sred();
    container.addSred(c);
    container.Print();
    cout << endl;
    return 0;
}