#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

const int ft_to_in = 12;
const double ft_to_me = 0.0254;
const double kg_to_pd = 2.2;

int main()
{
    int mass, hi_ft, hi_in;
    cout << "Please input your body mass(pounds) _______"
         << "\b\b\b\b\b\b\b";
    cin >> mass;
    cout << "Please input your height(feet and inches)" << endl;
    cout << "feet:";
    cin >> hi_ft;
    cout << "inches:";
    cin >> hi_in;
    hi_in += hi_ft *= ft_to_in;
    double ht_in_me = hi_in * ft_to_me;
    double mass_in_kg = mass / kg_to_pd;
    double bmi = mass_in_kg / (ht_in_me * ht_in_me);
    cout << "Your BMI is:" << bmi << endl;
    return 0;
}