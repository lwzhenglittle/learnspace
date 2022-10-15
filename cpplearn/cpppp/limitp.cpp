#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

const double pre = 1e-50;

int main()
{
    double i = 1.0;
    const double step = 1000000000000.0;
    double x = 1.0 / i;
    while (x > pre)
    {
        x = 1.0 / (i += step);
    }
    cout << x << endl;
    return 0;
}