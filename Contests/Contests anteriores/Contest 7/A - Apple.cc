#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int x, y, n;
    cin >> x >> y >> n;
    if (x <= y / 3 && n >= 3)
    {
        cout << x * n << '\n';
    }
    else
    {
        cout << (int)(n / 3) * y + (n - (int)(n / 3)*3)*x << '\n';
    }
}