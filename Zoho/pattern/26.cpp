#include <bits/stdc++.h>
using namespace std;

int main() {
    int size;
    cin >> size;
    int num = 1;

    for (int i = 1; i <= size; i++) { 
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    return 0;
}

// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 