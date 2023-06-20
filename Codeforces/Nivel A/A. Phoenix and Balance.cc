#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int casos, monedas, res;
    cin >> casos;
    for (int i = 0; i < casos; i++)
    {
        cin >> monedas;
        res = pow(2, monedas);
        for (int j = 1; j < monedas; j++)
        {
            if (j > (monedas / 2) - 1)
            {
                res -= pow(2, j);
            }
            else
            {
                res += pow(2, j);
            }
        }
        cout << res << '\n';
    }
}