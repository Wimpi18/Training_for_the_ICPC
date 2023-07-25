#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long pot(long long b, long long e, long long MOD)
{
    long long res = 1;
    while (e)
    {
        if (e & 1)
            res = res * b % MOD;
        b = b * b % MOD;
        e /= 2;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long c, x, y, n;
    cin >> c;
    for (long long i = 0; i < c; i++)
    {
        cin >> x >> y >> n;
        cout << pot(x, y, n) << '\n';
    }
    cin >> c;
}