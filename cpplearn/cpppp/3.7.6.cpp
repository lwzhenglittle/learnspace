#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int miles, gallons;
    cout << "Enter your driving distance (miles):";
    cin >> miles;
    cout << "Enter the amount of gasoline you use (gallons):";
    cin >> gallons;
    cout << "The distance your car can travel per gallon is:"
         << (double)miles / (double)gallons << endl;
    return 0;
}