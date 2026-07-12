// https://codeforces.com/group/aB2lfphSr3/contest/702806/problem/C

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

    vec<int> ans(n);
    stack<int> st;

    for (int i = 0; i < n; i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            st.push(i);
        } 
        else {
            int j = st.top(); st.pop();
            ans[i] = j + 1;
            ans[j] = i + 1;
        }
    }

    for (int x : ans) cout << x << " ";
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
}

// ТЕсты

// ( ) [ ]
// 2 1 4 3

// ( [ ] )
// 4 3 2 1

// { [ ( ) ] }
// 6 5 4 3 2 1