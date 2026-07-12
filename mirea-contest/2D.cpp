// https://codeforces.com/group/aB2lfphSr3/contest/702806/problem/D

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
    int q; cin >> q;
    deque<int> l, r;

    auto fix = [&]() {
        if (l.size() > r.size() + 1) {   // l стала слишком большой
            r.push_front(l.back());       // берём последний элемент l
            l.pop_back();                 // и убираем его из l
        }
        else if (l.size() < r.size()) {  // r обогнала l(l должен быть больше r, поэтому в прошлом if у стоит +1 у r)
            l.push_back(r.front());       // берём первый элемент r
            r.pop_front();                // убираем его из r
        }
    };

    while (q--) {
        char b; cin >> b;
        if (b == '+') {
            int x; cin >> x;
            r.push_back(x);
        } else if (b == '*') {
            int x; cin >> x;
            l.push_back(x);
        } else {
            cout << l.front() << "\n";
            l.pop_front();
        }
        fix();
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
}