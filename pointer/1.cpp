#include<bits/stdc++.h>
using namespace std;
int main(){

    int a=10;
    int *ptr = &a;

    cout<<a<<endl;   //10
    cout<<*ptr<<endl;//10
    cout<<ptr<<endl;//0x5ffe9c
    cout<<&ptr<<endl;//0x5ffe9c
    cout<<&a<<endl;//0x5ffe9c
}