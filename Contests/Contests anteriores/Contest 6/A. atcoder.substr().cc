#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string cadena = "atcoder";
    int L, R;
    cin >> L >> R;
    cout << cadena.substr(L-1, R-L+1) << '\n';
}