#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int x, y;
    bool esValido = false;
    cin >> x >> y;
    while (y - 2 >= 0 && !esValido)
    {
        if (y % 4 == 0 && y / 4 == x)
        {
            esValido = true;
        }
        else
        {
            x -= 1;
            y = y - 2;
        }
    }

    if (esValido || x == 0)
    {
        cout << "Yes" << '\n';
    }
    else
    {
        cout << "No" << '\n';
    }
}