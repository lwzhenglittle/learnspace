#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
#include<string>

using namespace std;

int c[5]={1,2,3,4,5};
int (*p)[5]=&c;

int main()
{
    cout<<p+1<<endl;
    cout<<p[1]<<endl;
    cout<<(*p)[1]<<endl;
    cout<<*(p+1)<<endl;
    return 0;
}