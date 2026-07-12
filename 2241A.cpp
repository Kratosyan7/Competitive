// https://codeforces.com/contest/2241/problem/A

//Вы можете применить следующую операцию любое (в том числе нулевое) количество раз:

//   - выбрать любое положительное z, такое что x делится на z;
//   - присвоить x:=xz. 

// Определите возможно ли из x получить y, используя описанную операцию.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        if (x % y == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}