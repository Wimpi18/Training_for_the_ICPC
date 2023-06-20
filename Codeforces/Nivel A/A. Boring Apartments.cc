#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int casos, numero, cantDigitos, numInicial, digitos, secuencia;
    cin >> casos;
    for (int i = 0; i < casos; i++)
    {
        cin >> numero;
        cantDigitos = 1;
        int aux = numero;
        while (aux / 10 != 0)
        {
            cantDigitos++;
            aux = aux / 10;
        }
        numInicial = aux;
        digitos = 10 * (numInicial - 1);
        aux = 0;
        for (int j = 0; j < cantDigitos; j++)
        {
            secuencia = aux + pow(10, j);
            aux = secuencia;
            if (secuencia <= numero)
            {
                digitos = digitos + (j + 1);
            }
        }
        cout << digitos << '\n';
    }
}