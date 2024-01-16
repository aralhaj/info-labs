#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    double exp = pow(10, -4);
    double sumr = 0, r = 0;
    int MAX = 0;

    cout << "Accuracy e = " << exp << endl;

    for (int n = 1; n <= 1000; n++)
    {

        r = pow((-1), n - 1) / pow(n, n);

        if (abs(r) - exp < 0)
            break;

        cout << "the value of the series = " << r << endl;
        sumr += r;
    }
    cout << "The sum of the series = " << sumr << endl;

    return 0;
}