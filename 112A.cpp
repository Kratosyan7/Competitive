// https://codeforces.com/problemset/problem/112/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string a,b; cin >> a >> b;

    for (char &c : a) c = tolower(c);
    for (char &c : b) c = tolower(c);
    
    if (a < b) {
        cout << -1 << endl;
    } else if (a > b) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}