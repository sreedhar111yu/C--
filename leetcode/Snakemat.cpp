#include <bits/stdc++.h>
using namespace std;

void printSnakeMatrix(int n) {
    vector<vector<int>> matrix(n, vector<int>(n));
    int value = 1;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {

            for (int j = 0; j < n; j++) {
                matrix[i][j] = value++;
            }
        } else {
            for (int j = n - 1; j >= 0; j--) {
                matrix[i][j] = value++;
            }
        }
    }

 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j];
        }
        cout << endl;
    }
}

int main() {
    int n;
   
    cin >> n;

    printSnakeMatrix(n);

    return 0;
}
