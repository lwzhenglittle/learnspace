#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
#include<string>

using namespace std;

int main()
{
    double h,r;
    cin>>h>>r;
    double v=3.14*r*r*h;
    cout<<int((20000.0/v)+1.0)<<endl;
    return 0;
}