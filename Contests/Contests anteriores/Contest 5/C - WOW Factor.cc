#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string cad, aux;
    int contadorV = 0, contadorO = 0, i, j, res = 0;
    cin >> cad;
    for (i = 0; i < cad.length(); i++)
    {
        if (cad[i] == 'o')
        {
            contadorO = 0;
            aux = cad.substr(i + 1, cad.length() - i);
            for (j = 0; j < aux.length(); j++)
            {
                if (aux[j] == 'o')
                {
                    contadorO++;
                   
                }
                 cout << contadorO << endl;
            }
            int wExistentesDespues = aux.length() - contadorO;
            int wExistentesAntes = contadorV - 1;
            res = res + wExistentesAntes * wExistentesDespues;
            if (cad[i + 1] == 'v')
            {
                contadorV = 0;
            }
        }
        else
        {
            contadorV++;
        }
    }
    cout << res << '\n';
}