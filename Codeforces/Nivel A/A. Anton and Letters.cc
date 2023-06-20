#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    set<char> st1;
    string coleccion;
    cin >> coleccion;
    string cadena[] = {coleccion};
    int tam = cadena->length();
    for (int i = 0; i < tam; i++)
    {
        cout << cadena[i] << endl;
    }
    for (int i = 1; i < coleccion.length(); i = i + 2)
    {
        st1.insert(coleccion[i]);
    }
    cout << st1.size() << '\n';
}