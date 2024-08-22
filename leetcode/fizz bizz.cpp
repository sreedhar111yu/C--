#include<bits/stdc++.h>
using namespace std;

void fizzbuzz(int size){
    string a = "fizz";
    string b = "buzz";
    
    for(int i = 1; i <= size; i++){
        if(i % 3 == 0 && i % 5 == 0){
            cout << a << b;
        }
        else if(i % 3 == 0){
            cout << a;
        }
        else if(i % 5 == 0){
            cout << b;
        }
        else{
            cout << i;
        }
        cout << endl; 
    }
}

int main(){
    int size;
    cin >> size;
    fizzbuzz(size);
    return 0;
}
