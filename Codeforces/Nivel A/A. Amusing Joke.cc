#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    bool verificador = false;
    string palabra1, palabra2, pila, palabraCombinada;
    int contador = 0;
    cin >> palabra1 >> palabra2 >> pila;
    palabraCombinada = palabra1 + palabra2;

    if (pila.length() == palabraCombinada.length())
    {
        for (int i = 0; i < pila.length(); i++)
        {
            for (int j = 0; j < palabraCombinada.length(); j++)
            {
                if (pila[i] == palabraCombinada[j])
                {
                    palabraCombinada[j] = '.';
                    j = palabraCombinada.length();
                    contador++;
                }
            }
        }
    }
    if (contador == pila.length())
    {
        verificador = true;
    }

    if (verificador)
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
    }
}