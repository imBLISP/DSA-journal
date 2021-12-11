#include<bits/stdc++.h>

using namespace std;

int solve(int n, int m, int a, int b) {
    if(b / (double)m >= a) return n * a;
    else {
        int ans = (n / m) * b;
        int r = n - (n/m)*m;
        ans = min(ans + b, ans + r * a);
        return ans;
    }
}

int main() {
    int n, m, a, b;

    cin >> n >> m >> a >> b;

    cout << solve(n, m, a, b);
}