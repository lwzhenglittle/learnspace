#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i;
    cin>>i;
    double result=0.0;
    if (i <= 100000)
    {
        result  = double(i)*0.1;
    }
    else if (i > 100000 && i <= 200000)
    {
        result = 10000.0+double(i-100000)*0.075;
    }
    else if (i > 200000 && i <= 400000)
    {
        result = 17500.0+double(i-200000)*0.05;
    }

    else if (i > 400000 && i <= 600000)
    {
        result=22500.0+double(i-400000)*0.03;
    }

    else if (i > 600000 && i <= 1000000)
    {
        result = 28500.0+double(i-600000)*0.015;
    }
    else
    {
        result = 34500.0+double(i-1000000)*0.01;
    }
    cout<<result<<endl;
    return 0;
}