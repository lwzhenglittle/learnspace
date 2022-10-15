#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

const int day = 24;
const int hour = 60;
const int minute = 60;

int main()
{
    long long secs;
    cout << "Enter the number of seconds:";
    cin >> secs;
    int days = secs / (day * hour * minute);
    secs -= days * (day * hour * minute);
    int hours = secs / (hour * minute);
    secs -= hours * (hour * minute);
    int minutes = secs / minute;
    cout << secs << " seconds = " << days << " days, " << hours << " hours, "
         << minutes << " minutes, " << secs % minute << " seconds" << endl;
    return 0;
}