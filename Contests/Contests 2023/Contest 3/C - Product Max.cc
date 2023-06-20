#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    if (b < 0 && c >= 0)
    {
        cout << b * c << '\n';
    }
    else if (d < 0 && a >= 0)
    {
        cout << d * a << '\n';
    }
    else if (a >= 0 && c >= 0)
    {
        cout << b * d << '\n';
    }
    else if (b <= 0 && d <= 0)
    {
        cout << a * c << '\n';
    }
    else
    {
        if (a * c > b * d)
        {
            cout << a * c << '\n';
        }
        else
        {
            cout << b * d << '\n';
        }
    }
}