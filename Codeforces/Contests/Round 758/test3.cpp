#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    bool alive[n];

    // pair<int, int> original[n];
    // pair<int, int> map1[n];
    // pair<int, int> map2[n];
    // for(int i = 0; i < n; i++) {
    //     cin >> map1[i].first;
    //     map1[i].second = i;
    //     original[i].first = map1[i].first;
    // }
    // for(int i = 0; i < n; i++) {
    //     cin >> map2[i].first;
    //     map2[i].second = i;
    //     original[i].second = map2[i].first;
    // }

    pair<int, int> players[n];
    for(int i = 0; i < n; i++) {
        cin >> players[i].first;
    }
    for(int i = 0; i < n; i++) {
        cin >> players[i].second;
    }

    sort(players, players + n);

    for(int i = 0; i < n; i++) {
        
    }


    // sort(map1, map1 + n);
    // sort(map2, map2 + n);

    // for(int i = 0; i < n; i++) {
    //     memset(alive, true, sizeof(alive));
    //     int battleswon = 0;


    // }

}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
        cout << endl;
    }
}