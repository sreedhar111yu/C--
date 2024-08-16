#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin>>size;

    for(int i=1;i<=size;i++){
        for(int j=1;j<=i;j++){
           if(j==1){
            cout<<j;
           }
           else{
            j+=(size-j+1);
            cout<<j;
           }
           j++;
        }
        
        
        cout<<endl;
    }
}

// 1
// 1
// 16
// 16
// 16