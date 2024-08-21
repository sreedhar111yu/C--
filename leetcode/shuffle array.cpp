#include<bits/stdc++.h>
using namespace std;

int shufflearray(vector<int>arr, int k){
    vector<int>shuffl;
for(int i=0;i<=k;i++){
    int idx=i+k;
    shuffl.push_back(arr[i]);
    shuffl.push_back(arr[idx]);
}
    
}
int mainI(){
    int size;
    cin>>size;
    int k;
    cin>>k;

    vector<int>arr(size);
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    shufflearray(arr, k);
}