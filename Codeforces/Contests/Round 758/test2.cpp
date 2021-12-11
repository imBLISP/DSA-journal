#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, a, b;
    cin >> n >> a >> b;

    if(abs(a - b) > 1) {
        cout << "-1";
        return;
    }
    if(a + b + 2 > n) {
            cout << "-1";
            return;
    }

    int i = 1;
    int j = n;

    vector<int> ans;

    if(a > b) {
        for(int k = 0; k < a; k++) { // 1 7 2 6 3 5 
            ans.push_back(i);
            ans.push_back(j);
            i++;
            j--;
        }
        while(i <= j) {
            ans.push_back(i);
            i++;
        }
    }

    if(b > a) {
        for(int k = 0; k < b; k++) { // 1 7 2 6 3 5 
            ans.push_back(j);
            ans.push_back(i);
            i++;
            j--;
        }
        while(i <= j) {
            ans.push_back(i);
            i++;
        }
    }

    if(a == b) {
        for(int k = 0; k < b; k++) { // 1 7 2 6 3 5 
            ans.push_back(i);
            ans.push_back(j);
            i++;
            j--;
        }
        while(i <= j) {
            ans.push_back(i);
            i++;
        }
    }

    for(int k = 0; k < ans.size(); k++) {
        cout << ans[k] << " ";
    }
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
        cout << endl;
    }
}