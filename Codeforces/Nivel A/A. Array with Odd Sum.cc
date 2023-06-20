#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int casos;
    cin >> casos;
    for (int c = 0; c < casos; c++)
    {
        int n;
        cin >> n;
        int sumaMatriz = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            sumaMatriz += a;
        }
        if (sumaMatriz % 2 != 0)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
    //Creo que hay que hallar una submatriz de tamaño n-2^c sumable y que dicha suma sea impar,
    //creo que tiene que ver con la cantidad mínima de pares e impares para que se cumpla la condición
}