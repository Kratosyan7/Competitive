// https://codeforces.com/problemset/problem/617/A

#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
template <class T> using vec = vector<T>;

template <class T>
istream& operator>>(istream& in, vec<T>& v) {
    for (auto& x : v) in >> x;
    return in;
}

template <class D>
istream& operator>>(istream& in, deque<D>& v) {
    for (auto& x : v) in >> x;
    return in;
}

void solve() {
    int a; cin >> a;
    int res = a/5;

    if(a % 5 != 0) res += 1;
    cout << res << "\n";
}

// 5 -> 1
// 12 -> 3
// 16 -> 4

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}