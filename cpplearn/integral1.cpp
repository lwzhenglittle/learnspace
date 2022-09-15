#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
#include<string>
#include<cmath>

using namespace std;

const double STEP = 0.000001;

int main()
{
    double result=0.0;
    for(double i=-1;i<=1;i+=STEP){
        result=result+(STEP*sqrt(1-i*i));
    }
    printf("%.7f\n",result*2.0);
    return 0;
}