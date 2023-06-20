#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tam, posMenor = 0, posMayor = 0, cantidad, resultado;
    cin >> cantidad;
    int alineacion[cantidad];
    for (int i = 0; i < cantidad; i++)
    {
        cin >> tam;
        alineacion[i] = tam;
        if (i > 0)
        {
            if (alineacion[i] > alineacion[posMayor])
            {
                posMayor = i;
            }
            if (alineacion[i] <= alineacion[posMenor])
            {
                posMenor = i;
            }
        }
    }
    /*cout << "El mayor es " << alineacion[posMayor] << " en la posicion " << posMayor << endl;
    cout << "El menor es " << alineacion[posMenor] << " en la posicion " << posMenor << endl;*/
    if (posMenor < posMayor)
    {
        resultado = (cantidad - 2) - posMenor + posMayor;
    }
    else
    {
        resultado = cantidad - posMenor + posMayor - 1;
    }
    cout << resultado << '\n';
}