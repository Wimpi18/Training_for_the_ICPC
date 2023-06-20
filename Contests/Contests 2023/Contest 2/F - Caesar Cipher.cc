#include <bits/stdc++.h>
using namespace std;

int hallark(char si, char ki)
{
    int k, a, b;

    a = si - 'a' + 1;
    b = ki - 'a' + 1;

    k = b - a;

    if (k < 0)
    {
        k = 26 + k;
    }
    // cout << "valor de k: " << k << endl;

    return k;
}

int main()
{

    string s, k;
    bool existe;
    int kr, kk, l;
    cin >> s >> k;

    l = s.length();

    kr = hallark(s[0], k[0]);

    existe = true;

    for (int i = 1; i < l && existe; i++)
    {
        // cout << "valor de i " << i << endl;
        // cout << "caracter en s "<< s[i] << endl << "caracter en k " << k[i] << endl;
        // cout << "Comparo " << kr << " con " << hallark(s[i], k[i]) << '\n';
        kk = hallark(s[i], k[i]);
        if (kr != kk)
        {
            existe = false;
            // cout << "no es igual mrd" << endl;
        }
    }

    if (existe)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}