// https://codeforces.com/contest/2167/problem/B
// author: khba - NOT ME!!

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int cnt1[26], cnt2[26];
    for (int i = 0; i < 26; ++i) cnt1[i] = cnt2[i] = 0;
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    for (char &c : s) cnt1[c - 'a'] ++;
    for (char &c : t) cnt2[c - 'a'] ++;
    bool answer = true;
    for (int i = 0; i < 26; ++i)
        if (cnt1[i] != cnt2[i]) 
            answer = false;
    puts(answer ? "YES" : "NO");
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
}