#include <bits/stdc++.h>
using namespace std;

void reverseString(string& str) {
    int start = 0;
    int end = str.length() - 1;
    while (start < end) {
        swap(str[start], str[end]);
        start++;
        end--;
    }
}

int main() {
    string str;
   
    cin >> str;
    reverseString(str);
    cout << "Reversed string: " << str << endl;
    return 0;
}
