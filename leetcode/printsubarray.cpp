#include<bits/stdc++.h>
using namespace std;

int subarray(vector<int>arr){
    int size=arr.size();
 for(int i=0;i<size;i++){
    for(int j=0;j<size;j++){

        for(int k=i;k<=j;k++){
            cout<<arr[k]<<" ";
            cout<<endl;
        }
        
    }
 }
}

int main(){
  int size;
  cin>>size;
  
  vector<int>arr(size);
  for(int i=0;i<size;i++){
    cin>>arr[i];
  }
  subarray(arr);
}