// https://codeforces.com/group/aB2lfphSr3/contest/702806/problem/A

#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
template <class T> using vec = vector<T>;

template <class T>
istream& operator>>(istream& in, vec<T>& v) {
    for (auto& x : v) in >> x;
    return in;
}

template <class Q>
istream& operator>>(istream& in, queue<Q>& v) {
    for (auto& x : v) in >> x;
    return in;
}

void solve() {
    int n; cin >> n;
    queue<int> q;

    while (n--) {
        char b; cin >> b;
        if (b == '+') {
            int x; cin >> x;
            q.push(x);
        } 
        else {
            cout << q.front() << "\n";
            q.pop();
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
}

// Очередь поддерживает другой набор операций:
//
// добавить элемент в конец -- q.push(x) 
// получить первый элемент -- q.front()
// удалить первый элемент -- q.pop()