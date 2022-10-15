#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

const int times = 12;
int main()
{
    int height;
    cout << "Please input your body height(inch)"
         << " __"
         << "\b\b";
    cin >> height;
    cout << "Your height is " << height / times << " feet and "
         << height % times << " inches" << endl;
    return 0;
}