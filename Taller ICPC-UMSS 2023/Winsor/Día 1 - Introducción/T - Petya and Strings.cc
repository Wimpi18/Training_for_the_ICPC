#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string x, y;
    bool sonIguales = true;
    int res;
    cin >> x >> y;

    for (int i = 0; i < x.length() && sonIguales; i++)
    {
        if (tolower(x[i]) != tolower(y[i]))
        {
            sonIguales = false;
            if (tolower(x[i]) < tolower(y[i]))
            {
                res = -1;
            }
            else
            {
                res = 1;
            }
        }
    }

    if (sonIguales)
    {
        cout << 0 << '\n';
    }
    else
    {
        cout << res << '\n';
    }
}