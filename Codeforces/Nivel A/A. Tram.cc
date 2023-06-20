#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int salida, ingreso, paradas, resultado = 0, aux = 0;
    cin >> paradas;
    for (int i = 0; i < paradas; i++)
    {
        cin >> salida >> ingreso;
        aux += ingreso;
        aux -= salida;
        if (aux > resultado)
        {
            resultado = aux;
        }
    }
    cout << resultado << '\n';
}