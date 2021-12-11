#include<bits/stdc++.h>
using namespace std;

typedef long long LL;

long double solve(LL n, LL streetlen, LL arr[]) {
    sort(arr, arr + n);

    LL l = 0;
    LL r = 2 * streetlen;
    LL ans;

    while(l <= r) {
        LL rd = (l + r)/2;

        bool reached = false;
        LL i = 1;
        if(arr[0] <= rd/2) {
            for(i; i < n; i++) {
                if(arr[i] - arr[i - 1] > rd) break;
            }
            if(streetlen - arr[n - 1] <= rd/2 && i >= n) reached = true;
        }

        if(reached) { // we reached the end
            r = rd - 1;
            ans = rd;
        }
        else { // couldnt reach the end
            l = rd + 1;
        }
    }
    return ans/(long double)2;
}

int main() {
    cout.precision(numeric_limits<double>::max_digits10 - 1);
    LL n, l;
    cin >> n >> l;

    LL arr[n];

    for(LL i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << solve(n, l, arr);
}