// https://codeforces.com/group/aB2lfphSr3/contest/702806/problem/E

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
    int n; cin >> n;
    vec<int> a(n); cin >> a;

    vec<int> L(n), R(n);
    stack<int> st;

    for (int i = 0; i < n; i++) {
        while (!st.empty() && a[st.top()] <= a[i]) st.pop();
        L[i] = st.empty() ? -1: st.top();
        st.push(i);
    }

    while (!st.empty()) st.pop();

    for (int i = n-1; i >= 0; i--) {
        while (!st.empty() && a[st.top()] <= a[i]) st.pop();
        R[i] = st.empty() ? n: st.top();
        st.push(i);
    }

    for (int i = 0; i < n; i++)
        cout << R[i] - L[i] - 2 << " ";
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
}