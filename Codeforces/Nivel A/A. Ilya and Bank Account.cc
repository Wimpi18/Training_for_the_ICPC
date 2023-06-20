///RESOLUCIÓN MÁS COMPLETA
#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
int cantDig(int);
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, a, b, valor, cantDigIni;
    set<int> res;
    cin >> n;
    if (n >= 0)
    {
        cout << n << '\n';
    }
    else
    {
        n = n * -1;
        cantDigIni = cantDig(n);
        int baseDiez = 1;
        while (n / baseDiez > 0)
        {
            a = n / baseDiez;
            b = n - (a * baseDiez);
            valor = (a / 10) * baseDiez + b;
            res.insert(valor);
            baseDiez = baseDiez * 10;
        }
        set<int>::iterator it, aux;
        it = res.begin();
        while (cantDig(*it) != cantDigIni - 1)
        {
            it++;
        }
        cout << (*it) * -1 << '\n';
    }
}

int cantDig(int n)
{
    int cont = 1;
    while (n / 10 > 0)
    {
        cont++;
        n = n / 10;
    }
    return cont;
}