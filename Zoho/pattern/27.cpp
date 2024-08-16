#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin>>size;
    int num =1;
    for(int i=1;i<=size;i++){
       // cout<<i<<endl;
       for(int j=size+num;j<=i;j++){
        cout<<i;
       }
       cout<<endl;
    }
}