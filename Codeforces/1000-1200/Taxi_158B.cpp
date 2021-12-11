#include<bits/stdc++.h>
using namespace std;


void solve(int n, int arr[]) {
    sort(arr, arr + n);

    int i = 0;
    int j = n - 1;

    int count = 0;

    while(i <= j) {

        int curr = 0;
        curr += arr[j];
        while(curr + arr[i] <= 4 && i != j) {
            curr += arr[i];
            i++;
        }

        count++;
        j--;
    }

    cout << count;
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    solve(n, arr);
}