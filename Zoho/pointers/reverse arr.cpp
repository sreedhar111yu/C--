#include<bits/stdc++.h>
using namespace std;

void revers(vector<int>& arr) {
    int end = arr.size() - 1;
    int start = 0; 
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int size;
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    revers(arr);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
