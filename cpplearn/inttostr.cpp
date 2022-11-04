#include<iostream>

using namespace std;

void int_to_char(int a,char c[]){
    int n=0,flag=a<0?true:false;
    a=a<0?a*-1:a;
    while(a){
        c[n++]=a%10+'0';
        a/=10;
    }
    if(flag){
        c[n++]='-';
    }
    n-=1;
    for(int i=0;i<n/2;i++){
        swap(c[i],c[n-i]);
    }
    c[n+1]=0;
}

int main(){
    char c[100];
    int x=-2147483647;
    int_to_char(x,c);
    cout<<c<<endl;
    return 0;
}