#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;
const double km_to_mile = 0.6214;
const double gallon_to_liter = 3.785;

int main()
{
    double eu;
    cout << "Please enter your car's fuel consumption (European style, "
            "L/100km, to one decimal point):";
    cin >> eu;
    double mile = 100 * km_to_mile;
    double gallon = eu / gallon_to_liter;
    cout << "Your car's fuel consumption is " << mile / gallon << " mpg."
         << endl;
    return 0;
}