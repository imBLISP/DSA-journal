#include<bits/stdc++.h>
using namespace std;

void solve(int x) {
    if(x >= 180) cout << "NO" << endl;

    if(360 % (180 - x) == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int x;
        cin >> x;
        solve(x);
    }
}