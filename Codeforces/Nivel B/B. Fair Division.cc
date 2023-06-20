#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int casos, cantCaramelos, peso;
    cin >> casos;
    for (int i = 0; i < casos; i++)
    {
        cin >> cantCaramelos;
        int pesoTotal = 0;
        for (int j = 0; j < cantCaramelos; j++)
        {
            cin >> peso;
            pesoTotal += peso;
        }

        if (cantCaramelos % 2 == 0)
        {
            if (pesoTotal % 2 == 0)
            {
                cout << "YES" << '\n';
            }
            else
            {
                cout << "NO" << '\n';
            }
        }
        else
        {
            if (pesoTotal % 2 == 0 && (pesoTotal / 2) < cantCaramelos)
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