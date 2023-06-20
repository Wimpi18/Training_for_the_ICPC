#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    string cadena, res;
    map<string, int> conjuntoSol;
    vector<string> keys;
    cin >> n >> cadena;
    for (int i = 0; i < n - 1; i++)
    {
        if (conjuntoSol[cadena.substr(i, 2)] == NULL)
        {
            keys.push_back(cadena.substr(i, 2));
        }
        conjuntoSol[cadena.substr(i, 2)] = conjuntoSol[cadena.substr(i, 2)] + 1;
    }

    /*for (pair<string, int> cat : conjuntoSol)
        cout << cat.first << ' ' << cat.second << '\n';*/
    int r = 0;
    for (int i = 1; i < keys.size(); i++)
    {
        if (conjuntoSol[keys[i]] > conjuntoSol[keys[r]])
        {
            r = i;
        }
    }
    res = keys[r];
    cout << res << '\n';
}