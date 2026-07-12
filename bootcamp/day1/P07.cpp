// https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P07

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
        c = tolower(c);
        if (string("aeiouy").find(c) == string::npos) {
            a += '.';
            a += c;
        }
    }
    cout << a << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}