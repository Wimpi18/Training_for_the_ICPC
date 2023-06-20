#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int cantidad, resultado = 0;
    string poliedro;
    cin >> cantidad;
    for (int i = 0; i < cantidad; i++)
    {
        cin >> poliedro;
        if (poliedro == "Tetrahedron")
        {
            resultado += 4;
        }
        else if (poliedro == "Cube")
        {
            resultado += 6;
        }
        else if (poliedro == "Octahedron")
        {
            resultado += 8;
        }
        else if (poliedro == "Dodecahedron")
        {
            resultado += 12;
        }
        else if (poliedro == "Icosahedron")
        {
            resultado += 20;
        }
    }
    cout << resultado << '\n';
}