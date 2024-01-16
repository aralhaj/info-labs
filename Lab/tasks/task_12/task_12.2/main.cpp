#include <iostream>
#include <map>
#include "time.h"
#include "time.cpp" 
#include <iostream>

using namespace std;
typedef  std::multimap<int, Time> Tmap;
typedef Tmap::iterator it;

Tmap createAndFillMultimap(int n)
{
    Tmap container;
    for (int i = 0; i < n;i++)
    {
        Time a;
        cout << "?";
        cin >> a;

        container.insert(make_pair(i, a));
    }
    return container;
}
Time srednee(Tmap v)
{
    Time s;
    int n = v.size();

    for (it it = v.begin(); it != v.end(); ++it)
    {
        s = s + it->second;
    }
    return s / n;
}
int Max(Tmap v)
{
    it i = v.begin();
    int nom = 0; 
    int k = 0;
    Time m = i->second;

    while (i != v.end())
    {
        if (m < i->second)
        {
            m = i->second;
            nom = k;
        }
        ++i;
        ++k;
    }

    return nom;
}
int Min(Tmap v)
{
    it i = v.begin();
    int nom = 0;
    int k = 0;
    Time m = i->second;

    while (i != v.end())
    {
        if (m > i->second)
        {
            m = i->second;
            nom = k;
        }
        ++i;
        ++k;
    }
    return nom;
}
void remove(Tmap& container)
{
    int min = Min(container);


    auto it = container.begin();
    std::advance(it, min);

    container.erase(it);
}
void add(Tmap& container)
{
    int max = Max(container);


    it maxIterator = container.begin();
    std::advance(maxIterator, max);


    auto maxElement = *maxIterator;


    container.insert(container.begin(), maxElement);
}
void addSred(Tmap& container)
{
    Time sred = srednee(container);
    for (auto& elem : container)
    {
        elem.second = elem.second + sred;
    }
}
void printMultimap(const Tmap& container)
{
    for (const auto& element : container)
    {
        cout << "First: " << element.first << ", Second: " << element.second << endl;
    }
}
int main()
{
    setlocale(0, "");
    int n;
    cout << " = ";
    cin >> n;
    Tmap container = createAndFillMultimap(n);
    printMultimap(container);
    cout << endl;

    add(container);
    printMultimap(container);
    cout << endl;

    remove(container);
    printMultimap(container);
    cout << endl;

    addSred(container);
    printMultimap(container);
    cout << endl;
    return 0;
}