// https://codeforces.com/group/aB2lfphSr3/contest/702240/problem/D

#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
template <class T> using vec = vector<T>;

template <class T>
istream& operator>>(istream& in, vec<T>& v) {
    for (auto& x : v) in >> x;
    return in;
}

void solve() {
    int n; cin >> n;
    vec<int> a(n); cin >> a;
    vec<int> b;
    for (int i = 0; i < n; i++) b.push_back(a[i]);
    sort(all(b));

    for (int i = 0; i < n; i++) {
        int cnt = 0;
        cout << lower_bound(b.begin(), b.end(), a[i]) - b.begin() << " ";
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
}

// 5 1 3 3 2
// ij