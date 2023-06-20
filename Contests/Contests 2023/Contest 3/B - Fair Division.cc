#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long t;
    int n, a;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int cantDos = 0, cantUno = 0;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> a;
            if (a == 1)
            {
                cantUno++;
            }
            else
            {
                cantDos++;
            }
        }
        // cout << "Valor cant uno es" << cantUno << '\n';
        // cout << "Valor cant dos es" << cantDos << '\n';

        if (n % 2 == 0)
        {
            // cout << "Cant uno + dos es " << (cantUno + cantDos) << '\n';
            if ((cantUno + 2 * cantDos) % 2 == 0)
            {
                cout << "YES" << '\n';
            }
            else
            {
                cout << "NO" << '\n';
            }
        }
        else if (n == 1)
        {
            cout << "NO" << '\n';
        }
        else
        {

            if (cantDos % 2 == 1 && cantUno % 2 == 0 && cantDos >= 1 && cantUno >= 2)
            {
                cout << "YES" << '\n';
            }
            else
            {
                cout << "NO" << '\n';
            }
        }
    }
}