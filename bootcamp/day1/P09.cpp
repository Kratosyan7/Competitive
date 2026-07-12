// https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P09

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
    string s; cin >> s;

   cout << min<long long>(n / 11, count(all(s), '8')) << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}