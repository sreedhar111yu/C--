#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=10;
    int* p=&a;
    cout<<p<<endl;//0x5ffe94
    cout<<p+1<<endl;//0x5ffe92
    cout<<p+2<<endl;//0x5ffe9c
}