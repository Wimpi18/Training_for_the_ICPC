#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int A, B, C, K, res = 0, aux;
    cin >> A >> B >> C >> K;
    if (A > 0 && K > 0)
    {
        aux = min(K, A);
        K -= aux;
        res += aux;
        A -= aux;
    }

    if (B > 0 && K > 0)
    {
        aux = min(K, B);
        K -= aux;
        B -= aux;
    }

    if (C > 0 && K > 0)
    {
        aux = min(K, C);
        K -= aux;
        res -= aux;
        C -= aux;
    }

    cout << res << '\n';
}