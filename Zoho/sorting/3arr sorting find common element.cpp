#include<bits/stdc++.h>
using namespace std;

int  findCommonElementsCombinedArray(vector<int>arr1,vector<int>arr2, vector<int>arr3 ){
    int n1=arr1.size();
    int n2=arr2.size();
    int n3=arr3.size();

    vector<int>comb;
    comb.insert(comb.end(),arr1.begin(),arr1.end());
    comb.insert(comb.end(),arr2.begin(),arr2.end());
    comb.insert(comb.end(),arr3.begin(),arr3.end());
    unordered_map<int,int>mp;

    for(int i=0;i<comb.size();i++){
        mp[comb[i]]++;
    }
    for(auto it=mp.begin(); it!=mp.end();it++){
        if(it->second==3){
            cout<<it->first<<" ";
        }
    }
    


};

int main(){
    int size1;
    cout<<"size1";
    cin>>size1;
    vector<int>arr1(size1);

    int size2;
    cout<<"size2";
    cin>>size2;
    vector<int>arr2(size2);

    int size3;
    cout<<"size3";
    cin>>size3;
    vector<int>arr3(size3);

    for(int i=0;i<size1;i++){
        cin>>arr1[i];
    }

    for(int j=0;j<size2;j++){
        cin>>arr2[j];
    }
    for(int k=0;k<size3;k++){
        cin>>arr3[k];
    }
    findCommonElementsCombinedArray(arr1, arr2, arr3);

}