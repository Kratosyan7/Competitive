// https://codeforces.com/contest/2242/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        int mx = 0, cnt = 0;
        for (int i = 0; i < k; i++) {
            int c;
            cin >> c;
            mx = max(mx, c);
            if (c >= 2) cnt++;
        }
        cout << (mx >= 3 || cnt >= 2 ? "YES" : "NO") << "\n";
    }
}