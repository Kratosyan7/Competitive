// https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P06

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
    string s; cin >> s;
    string a;

    for (char c : s) {
        if (c != '+'){
            a.push_back(c);
        }
    }

    sort(all(a));

    for (int i = 0; i < a.size(); i++) {
        if (i != 0) cout << "+";
        cout << a[i];
    }
    cout << "\n";
    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
