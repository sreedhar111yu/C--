#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=10;
    int*ptr;

    ptr=&a;
    cout<<*ptr<<endl; // 10
    cout<<&a<<endl; //0x5ffe94

    int b=12;
    *ptr=b;
    cout<<b<<endl;//12
    cout<<&b<<endl;//0x5ffe90

     int c=15;
    *ptr=c;
    cout<<c<<endl;//15
    cout<<&c<<endl;//0x5ffe8c
}