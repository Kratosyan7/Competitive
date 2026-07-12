// https://codeforces.com/problemset/problem/282/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    int c;
    cin >> c;
    string x;
    int n = 0;
    while (c--){
        cin >> x;
        if (x.find('+') != string::npos) n++;
        else n--;
    }

    cout << n << "\n";
    return 0;
}