// https://codeforces.com/group/aB2lfphSr3/contest/702240/problem/A

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(0);
//     cin.tie(0);

//     int t;
//     cin >> t;
//     while (t--) {
//         int k;
//         cin >> k;
//         vector<int> c(k);
//         for (int i = 0; i < k; i++)
//             cin >> c[i];

//         sort(c.begin(), c.end()); 

//         // ищем максимум чтобы делать сравнение и найти как бы предмаксимальный элемент
//         int mx = c[0];
//         for (int i = 0; i < k; i++) {
//             mx = max(mx, c[i]);
//         }

//         // ищем предпоследний элемент меньший максимума
//         int pred_mx = 0;
//         for (int i = k - 1; i >= 0; i--) {
//             if (c[i] < mx){
//                 pred_mx = c[i];
//                 break;
//             }
//        }
//        cout << pred_mx << "\n";
//     }
// }

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
    vec<int> c(n); cin >> c;
    int mx = *max_element(all(c));
    int pred = INT_MIN;
    for (int x : c)
        if (x < mx && x > pred) pred = x;
    cout << pred << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
}

// 3
// 5
// 1 5 3 4 2
// 3
// 5 5 3
// 6
// -10 -20 -10 -30 -40 -20