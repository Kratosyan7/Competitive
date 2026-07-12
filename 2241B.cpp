// https://codeforces.com/contest/2241/problem/B
// под чиф кифа не проигрываю

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;
        // считаем количество цифр
        int d = 0;
        long long tmp = x;
        while (tmp > 0) { tmp /= 10; d++; }
        // y = 10^d + 1, 
        long long y = 1;
        for (int i = 0; i < d; i++) y *= 10;
        y += 1;
        cout << y << "\n";
    }
    return 0;
}