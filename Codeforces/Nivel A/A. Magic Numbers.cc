#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int contarDigitos(int);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, cantDigitos, i = 1;
    cin >> n;
    cantDigitos = contarDigitos(n);

    while (i <= cantDigitos)
    {

        //cout << "Valor n " << n << '\n';
        //cout << "Posible 1 " << (int)(n / (float)pow(10, cantDigitos - i - 2)) << '\n';
        //cout << "Posible 2 " << (int)(n / (float)pow(10, cantDigitos - i - 1)) << '\n';
        //cout << "Posible 3 " << (int)(n / (float)pow(10, cantDigitos - i)) << '\n';
        // cout << "Potencia 1 " << (float)pow(10, cantDigitos - i) << '\n';
        // cout << "Potencia 2 " << (float)pow(10, cantDigitos - i - 1) << '\n';
        // cout << "Potencia 3 " << (float)pow(10, cantDigitos - i - 2) << '\n';

        if ((int)(n / (float)pow(10, cantDigitos - i - 2)) == 144)
        {
            float aux = (float)pow(10, cantDigitos - i - 2);
            n = (int)(n % (int)aux);
            i = i + 3;
        }
        else if ((int)(n / (float)pow(10, cantDigitos - i - 1)) == 14)
        {
            float aux = (float)pow(10, cantDigitos - i - 1);
            n = (int)(n % (int)aux);
            i = i + 2;
        }
        else if ((int)(n / (float)pow(10, cantDigitos - i)) == 1)
        {
            float aux = (float)pow(10, cantDigitos - i);
            n = (int)(n % (int)aux);
            i++;
        }
        else
        {
            break;
        }
    }

    if (i > cantDigitos && n == 0)
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
    }
}

int contarDigitos(int n)
{
    if (n / 10 == 0)
    {
        return 1;
    }
    else
    {
        return contarDigitos(n / 10) + 1;
    }
}