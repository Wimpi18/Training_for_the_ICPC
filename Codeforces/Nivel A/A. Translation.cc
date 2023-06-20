#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    bool verificarTraduccion = true;
    string palabra, traduccion;
    cin >> palabra >> traduccion;
    int j = palabra.length() - 1;
    for (int i = 0; i < palabra.length() && verificarTraduccion; i++, j--)
    {
        if (palabra[i] != traduccion[j])
        {
            verificarTraduccion = false;
        }
    }
    if (verificarTraduccion)
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
    }
}