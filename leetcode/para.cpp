#include<bits/stdc++.h>
using namespace std;

int maxDepth(string S) {
    int curr=0;
    int bal=0;
    int maxd=0;


    for (char ch : S) {
        if (ch == '(') {
            curr++;
            bal++;
            if (curr > maxd) {
                maxd = curr;
            }
        } else if (ch == ')') {
            bal--;
            curr--;

        }
        if (bal < 0) {
            return -1;
        }
    }

    
    if (bal!= 0) {
        return -1;
    }

    return maxd;
}

int main() {
    string S;
    cin>>S;
    int res=maxDepth(S);
    cout<<res;
    return 0;
}