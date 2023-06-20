#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool buscarEnArreglo(char e[], char x, int &);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    char dir;
    string sequence, res = "";
    cin >> dir >> sequence;
    char e1[] = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'};
    char e2[] = {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';'};
    char e3[] = {'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/'};
    for (int i = 0; i < sequence.length(); i++)
    {
        int indexE = 0;
        if (buscarEnArreglo(e1, sequence[i], indexE))
        {
            if (dir == 'R')
            {
                res += e1[indexE - 1];
            }
            else
            {
                res += e1[indexE + 1];
            }
        }
        else if (buscarEnArreglo(e2, sequence[i], indexE))
        {
            if (dir == 'R')
            {
                res += e2[indexE - 1];
            }
            else
            {
                res += e2[indexE + 1];
            }
        }
        else if (buscarEnArreglo(e3, sequence[i], indexE))
        {
            if (dir == 'R')
            {
                res += e3[indexE - 1];
            }
            else
            {
                res += e3[indexE + 1];
            }
        }
    }
    cout << res << '\n';
}

bool buscarEnArreglo(char e[], char x, int &indexE)
{
    bool estaAqui = false;
    for (int i = 0; i < 10 && !estaAqui; i++)
    {
        if (x == e[i])
        {
            estaAqui = true;
            indexE = i;
        }
    }
    return estaAqui;
}