#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int casos, tamArreglo, sumaPares, sumaImpares, mitadElementos, elementoFinal, impresion = 2;
    cin >> casos;
    for (int i = 0; i < casos; i++)
    {
        cin >> tamArreglo;
        mitadElementos = tamArreglo / 2;
        if ((tamArreglo / 2) % 2 != 0)
        {
            cout << "NO" << '\n';
        }
        else
        {
            cout << "YES" << '\n';
            sumaPares = (mitadElementos * (2 + 2 * mitadElementos)) / 2;
            sumaImpares = ((mitadElementos - 1) * (1 + (mitadElementos - 2) * 2 + 1)) / 2;
            elementoFinal = sumaPares - sumaImpares;
            impresion = 2;
            for (int j = 0; j < tamArreglo / 2; j++)
            {
                cout << impresion << '\n';
                impresion += 2;
            }
            impresion = 1;
            for (int j = 0; j < (tamArreglo / 2) - 1; j++)
            {
                cout << impresion << '\n';
                impresion += 2;
            }
            cout << elementoFinal << '\n';
        }
    }
}