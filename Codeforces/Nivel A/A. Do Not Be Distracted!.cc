#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    bool repetido;
    int casos, longitud;
    string cadena;
    vector<char> caracterVerificado;
    cin >> casos;
    for (int i = 0; i < casos; i++)
    {
        cin >> longitud >> cadena;
        repetido = false;
        caracterVerificado.clear();
        for (int j = 0; j < longitud - 1 && !repetido; j++)
        {
            if (cadena[j] != cadena[j + 1] && caracterVerificado.size() > 0)
            {
                for (int k = 0; k < caracterVerificado.size(); k++)
                {
                    if (caracterVerificado[k] == cadena[j + 1])
                    {
                        repetido = true;
                    }
                }
            }
            if (cadena[j] != cadena[j + 1])
            {
                caracterVerificado.push_back(cadena[j]);
            }
        }
        if (repetido)
        {
            cout << "NO" << '\n';
        }
        else
        {
            cout << "YES" << '\n';
        }
    }
}