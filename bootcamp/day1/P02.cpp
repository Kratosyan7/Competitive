// https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P02

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> c(n);
    for (int i = 0; i < n; i++) cin >> c[i];

    int a, b;
    cin >> a >> b;

    long long sum = 0;
    for (int i = a; i <= b; i++) sum += c[i];

    cout << sum << "\n";
}