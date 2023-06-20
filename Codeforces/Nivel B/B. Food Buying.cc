#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int casos, burles, res, x;
    bool esPosible = true;
    cin >> casos;
    for (int c = 0; c < casos; c++)
    {
        cin >> burles;
        res = 0;
        x = 10;
        esPosible = true;
        while (esPosible)
        {
            if (burles - x > 0 && burles - x < x)
            {
                burles = burles - x + x / 10;
                res += x;
            }
            else if (burles - x >= 0)
            {
                burles = burles - x + x / 10;
                res += x + x / 10;
            }
            else
            {
                esPosible = false;
            }
        }
        cout << res << '\n';
    }
}