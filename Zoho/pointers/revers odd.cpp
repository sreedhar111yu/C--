#include<bits/stdc++.h>
using namespace std;

void oddrevers(vector<int>& arr) {
    int start = 1; 
    int end = arr.size() % 2 == 0 ? arr.size() - 2 : arr.size() - 1; // Last odd index

    while (start < end) {
        swap(arr[start], arr[end]);
        start += 2;
        end -= 2;
    }
}

int main() {
    int size;
    cin >> size;

    vector<int> arr(size);
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    oddrevers(arr);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}


// 5
// 4 7 3 1 10   
// 4 10 3 1 7 