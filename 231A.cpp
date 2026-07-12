// https://codeforces.com/problemset/problem/231/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int t = 0;
    while (n--) {
        int x,y,z;
        cin >> x >> y >> z;
        if (x+y+z >= 2)
            t++;
    }

    cout << t << "\n";
    return 0;
}