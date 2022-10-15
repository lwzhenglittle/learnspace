#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
#include<string>

using namespace std;

int main()
{
    int s,v,mins,hours;
    cin>>s>>v;
    mins=s/v;
    if(s%v!=0){
        mins+=1;
    }
    mins+=10;
    hours=mins/60;
    mins%=60;
    int resmin,resh;
    resmin=60-mins;
    resh=7-hours;
    if(resh<0){
        resh+=24;
    }
    if(resh<10){
        cout<<0;
    }
    cout<<resh<<":";
    if(resmin<10){
        cout<<0;
    }
    cout<<resmin<<endl;
    return 0;
}