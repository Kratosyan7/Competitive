// https://codeforces.com/group/aB2lfphSr3/contest/702240/problem/E

#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
template <class T> using vec = vector<T>;

template <class T>
istream& operator>>(istream& in, vec<T>& v) {
    for (auto& x : v) in >> x;
    return in;
}

void solve(){
    int n, s; cin >> n >> s;
    vec<int> a(n); cin >> a;
    sort(all(a));

    long long cnt = 0;
    for (int i = 0; i < n; i++) {
        auto it = upper_bound(a.begin() + i + 1, a.end(), (long long)s - a[i]);
        cnt += it - (a.begin() + i + 1);
    }
    cout << cnt << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
}