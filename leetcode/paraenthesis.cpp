#include<bits/stdc++.h>
using namespace std;

int paraenthesis(string s){
    int curr=0;
    int maxd =0;
    int bal=0;

    for( char ch:s){
        if(ch =='('){
            curr++;
            bal++;

        if(curr>maxd){
           maxd=curr;
        }
        if(ch==')'){
         curr--;
         bal--;
     }
     }
     if(bal>0){
        return -1;
     }
     if(bal!=0){
        return -1;
     }
    
       
       
    }
    return maxd;
}

int main (){
    string s;
    cin>>s;
    int res =paraenthesis(s);
    cout<<res;
}