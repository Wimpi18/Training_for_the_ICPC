#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int casos, tam, movimientos, resultado, elementos, posNumMenor, posNumMayor, numMenor, numMayor;
    cin >> casos;
    for (int c = 0; c < casos; c++)
    {
        cin >> tam >> movimientos;
        int a[tam];
        int b[tam];
        resultado = 0;
        for (int i = 0; i < tam; i++)
        {
            cin >> elementos;
            a[i] = elementos;
        }
        for (int i = 0; i < tam; i++)
        {
            cin >> elementos;
            b[i] = elementos;
        }
        for (int i = 0; i < movimientos; i++)
        {
            numMenor = 31, numMayor = 0; posNumMenor = 0; posNumMayor = 0;
            for (int j = 0; j < tam; j++)
            {
                if (a[j] < numMenor)
                {
                    numMenor = a[j];
                    posNumMenor = j;
                }
                if (b[j] > numMayor)
                {
                    numMayor = b[j];
                    posNumMayor = j;
                }
            }
            if (b[posNumMayor] > a[posNumMenor])
            {
                int aux = a[posNumMenor];
                a[posNumMenor] = b[posNumMayor];
                b[posNumMayor] = aux;
            }
        }
        for (int i = 0; i < tam; i++)
        {
            resultado += a[i];
        }
        cout << resultado << '\n';
    }
}