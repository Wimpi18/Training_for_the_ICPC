#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int coordenada, resultado;
    int arreglo[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> coordenada;
        arreglo[i] = coordenada;
    }
    int min;
    for (int i = 0; i < 3; i++)
    {
        min = i;
        for (int j = i + 1; j < 3; j++)
        {
            if (arreglo[j] < arreglo[min])
            {
                min = j;
            }
        }
        int aux = arreglo[i];
        arreglo[i] = arreglo[min];
        arreglo[min] = aux;
    }
    resultado = arreglo[2] - arreglo[1] + arreglo[1] - arreglo[0];
    cout << resultado << '\n';
}