// https://codeforces.com/group/aB2lfphSr3/contest/702806/problem/B

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
    vec<pair<int,int>> st;

    while (n--) {
        char b; cin >> b;
        if (b == '+') {
            int x; cin >> x;
            int cur_min = st.empty() ? x : min(x, st.back().second);
            st.push_back({x, cur_min});
        }
        else if (b == '-') {
            st.pop_back();
        }
        else {
            cout << st.back().second << "\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
}

// Стек поддерживает операции только на конце структуры:

// добавить элемент в конец -- st.push_back(x);
// получить последний элемент -- st.back();
// удалить последний элемент -- st.pop_back();