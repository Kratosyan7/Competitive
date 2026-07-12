// https://codeforces.com/problemset/problem/263/A

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
    int r, c;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int x; cin >> x;
            if (x == 1) { r = i; c = j;} 
        }
    }
    
    // 1 need to be in f(r,c) = (3,3)
    // so we need to calculate in which amount of +1 or -1 to r or c they'll be in (3,3)
    // geting new variable to count it
    // and it will be equal to cnt = abs(3 - r) for r only
    // if r = 2 => cnt = 3 - 2 = 1 || if r = 5 => cnt = abs(3 - 5) = 2
    // and copy it for c
    // ну и тк r и c нумеруются с 0, то получается в общей сумме cnt = abs(2 - r) + abs(2 - c)

    int cnt = abs(2 - r) + abs(2 - c);
    cout << cnt << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}