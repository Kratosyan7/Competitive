// https://codeforces.com/group/aB2lfphSr3/contest/702240/problem/C

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template <class T> using vec = vector<T>;
#define all(x) (x).begin(), (x).end()

template <class T>
istream& operator>>(istream& in, vec<T>& v) {
    for (auto& x : v) in >> x;
    return in;
}

void solve() {
    int q;
    cin >> q;
    vector<int> a;

    while (q--) {
        string op;
        cin >> op;
        if (op == "push") {
            ll x;
            cin >> x;
            a.push_back(x);
            cout << a.size() << '\n';
        } else if (op == "pop") {
            cout << a[a.size() - 1] << '\n';
            a.pop_back();
            
        } else {
            ll i;
            cin >> i;
            ll n = (ll)a.size();
            ll idx = (i - 1) % n; 
            cout << a[idx] << '\n';
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
}