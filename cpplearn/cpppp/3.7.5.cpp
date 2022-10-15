#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    long long global, usa;
    cout << "Enter the world's population: ";
    cin >> global;
    cout << "Enter the population of the US: ";
    cin >> usa;
    double perc = (double)usa / (double)global;
    perc *= 100.0;
    cout << "The population of the US is " << perc
         << "% of the world population." << endl;
    return 0;
}