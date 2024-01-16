#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float fa = 1000, fb = 0.0001;
    double dd = 1000, dc = 0.0001;

    double a = 0, b = 0, c = 0, d = 0;

    float result = 0;
    double result1 = 0;

    result = (pow(fa - fb, 3) - (pow(fa, 3) - 3 * pow(fa, 2) * fb)) / pow(fb, 3) - 3 * fa * pow(fb, 2);
    result1 = (pow(dd - dc, 3) - (pow(dd, 3) - 3 * pow(dd, 2) * dc)) / pow(dc, 3) - 3 * dd * pow(dc, 2);

    cout << "Result with float: " << result << endl;
    cout << "Result with double: " << result1 << endl;

    cout << endl;
}