// https://codeforces.com/problemset/problem/158/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int a[55];              // (n ≤ 50)
    for (int i = 0; i < n; i++)
        cin >> a[i];        // читаем n баллов в цикле

    int p = a[k - 1];       // (k-1) место

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= p && a[i] > 0)
            count++;
    }

    cout << count << "\n";
    return 0;
}

// место (в условии):    1    2    3    4    5    6    7    8
//                       ↓    ↓    ↓    ↓    ↓    ↓    ↓    ↓
// баллы:               10    9    8    7    7    7    5    5
//                       ↑    ↑    ↑    ↑    ↑    ↑    ↑    ↑
// индекс (в массиве):  a[0] a[1] a[2] a[3] a[4] a[5] a[6] a[7]