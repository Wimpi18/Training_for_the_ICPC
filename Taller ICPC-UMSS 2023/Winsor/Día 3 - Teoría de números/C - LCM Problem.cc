#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long l, r, x, y;
        cin >> l >> r;
        if (l * 2 <= r)
        {
            cout << l << ' ' << l * 2 << '\n';
        }
        else
        {
            cout << -1 << ' ' << -1 << '\n';
        }
    }
}