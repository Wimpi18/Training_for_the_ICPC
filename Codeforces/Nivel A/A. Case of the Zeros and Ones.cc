#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, cont0 = 0, cont1 = 0;
    string cadena;
    cin >> n >> cadena;
    for (int i = 0; i < n; i++)
    {
        if (cadena[i] == '1')
        {
            cont1++;
        }
        else
        {
            cont0++;
        }
    }
    cout << abs(cont0 - cont1) << '\n';
}