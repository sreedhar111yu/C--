#include <bits/stdc++.h>
using namespace std;

string conversion(string str, int k) {
    if (k == 1 || k >= str.size()) {
        return str;
    }

    vector<string> row(min(k, int(str.size()))   
    );
    int idx = 0;
    int d = 1;

    for (char c : str) {
        row[idx] += c;
        if (idx == 0) {
            d = 1;
        } else if (idx == k - 1) {
            d = -1;
        }
        idx += d;
    }

    string res;
    for (auto& rows : row) {
        res += rows;
    }
    return res;
}

int main() {
    string str;
    cin >> str;
    int k;
    cin >> k;

    string result = conversion(str, k);
    cout << result << endl;

    return 0;
}
