#include <bits/stdc++.h>
using namespace std;

int maxpair(vector<int> &A, vector<int> &B, int size) {
    int pair = 0;
    for (int s = 0; s < size; s++) {
        int currpair = 0;
        for (int i = 0; i < size; i++) {
            int target = (i + s) % size;
            if (A[i] == B[target]) {
                currpair++;
            }
        }
        pair = max(pair, currpair);
    }
    return pair;
}

int main() {
    int size;
    cin >> size;

    vector<int> A(size);
    vector<int> B(size);

    for (int i = 0; i < size; i++) {
        cin >> A[i];
    }
    for (int j = 0; j < size; j++) {
        cin >> B[j];
    }

    int result = maxpair(A, B, size);
    cout << result << endl;

    return 0;
}
