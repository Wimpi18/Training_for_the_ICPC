#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string texto;
    cin >> texto;
    for (long long i = 0; i < texto.size() - 1; i++)
    {
        if (texto[i] == texto[i + 1])
        {
            texto = texto.substr(0, i) + texto.substr(i + 2, texto.size());
            i -= 2;
        }
    }
    cout << texto << '\n';
}