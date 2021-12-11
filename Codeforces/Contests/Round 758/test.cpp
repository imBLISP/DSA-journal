#include<bits/stdc++.h>
using namespace std;


void solve(int n) {

    for(int i = 2; i < n + 2; i++) {
        cout << i << " ";
    }
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        solve(n);
        cout << endl;
    }
}