#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int casos, cantAtletas, atleta, respuesta;
    cin >> casos;
    for (int i = 0; i < casos; i++)
    {
        respuesta = 1000;
        cin >> cantAtletas;
        int lista[cantAtletas];
        for (int j = 0; j < cantAtletas; j++)
        {
            cin >> atleta;
            lista[j] = atleta;
        }
        sort(lista, lista + cantAtletas);
        for (int j = 1; j < cantAtletas; j++)
        {
            if (lista[j] - lista[j - 1] < respuesta)
            {
                respuesta = lista[j] - lista[j - 1];
            }
        }
        cout << respuesta << '\n';
    }
}