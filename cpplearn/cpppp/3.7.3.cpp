#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

const double times = 60.0;

int main()
{
    int degree, minutes, secs;
    double result;
    cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
    cout << "First, enter the degrees:";
    cin >> degree;
    cout << "Next, enter the minutes of arc:";
    cin >> minutes;
    cout << "Finally, enter the seconds of arc:";
    cin >> secs;
    result = degree + (minutes / times) + (secs / (times * times));
    cout << degree << " degrees, " << minutes << " minutes, " << secs
         << " seconds = " << result << " degrees" << endl;
    return 0;
}