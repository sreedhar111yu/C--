#include<bits/stdc++.h>
using namespace std;

    vector<int> snakePattern(vector<vector<int> > matrix)
    {   
    
        vector<int>arr;
        int len =matrix[0].size();
        for(int i=0;i<len;i++){
            if(i%2==0){
                for(int j=0;j<len;j++){
                    arr.insert(arr.end(),matrix[i][j]);
                }
            }
            else
            {
                for(int j=len-1;j>=0;j--){
                    arr.insert(arr.end(),matrix[i][j]);
                }
            }
        }
        return arr;
    }
