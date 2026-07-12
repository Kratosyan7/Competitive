// https://codeforces.com/group/aB2lfphSr3/contest/702240/problem/B

#include <bits/stdc++.h>
using namespace std;
template <class T> using vec = vector<T>;
#define all(x) (x).begin(), (x).end()

template <class T>
istream& operator>>(istream& in, vec<T>& v) {
    for (auto& x : v) in >> x;
    return in;
}

void solve() {
    int n; cin >> n;
    vec<int> a(n); cin >> a;

    vec<int> odd, even; // odd — позиции 1,3,5,... (0-индекс i=0,2,4,...)
    for (int i = 0; i < n; i += 2) odd.push_back(a[i]);
    for (int i = 1; i < n; i += 2) even.push_back(a[i]);

    sort(all(odd), greater<int>());
    sort(all(even));

    for (int i = 0; i < n; i += 2) a[i] = odd[i / 2];
    for (int i = 1; i < n; i += 2) a[i] = even[i / 2];

    for (int i = 0; i < n; i++) cout << a[i] << " \n"[i == n - 1];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
}

// 3 4 1 2 5
// ^ ^ ^ ^ ^
// 0 1 2 3 4

// 0 2 4
//  1 3

