#include <iostream>
#include "task.h"
#include <windows.h>

using namespace std;

int main()
{
    setlocale(0, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Time a, b,c ;
	cin >> a >> b;
	//сложение временных интервалов
	c= a + b;
	cout << c;
	//сравнение временных интервалов
	if (a == b) cout << "a==b";
	else cout << "a!=b";
}