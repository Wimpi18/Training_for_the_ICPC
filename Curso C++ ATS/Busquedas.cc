#include <iostream>
using namespace std;
int main()
{
    //Busqueda secuencial
    int a[] = {3, 4, 2, 1, 5};
    int i = 0, dato;
    bool verificar = false;
    dato = 4;

    while ((verificar == false) && (i < 5))
    {
        if (a[i] == dato)
        {
            verificar = true;
        }
        i++;
    }

    //Busqueda binaria (el arreglo debe estar ordenado)
    int numeros[] = {1, 2, 3, 4, 5};
    int inf = 0, sup = 5, mitad;
    dato = 2;
    verificar = false;
    while (inf <= sup)
    {
        mitad = (inf + sup) / 2;
        if (numeros[mitad] == dato)
        {
            verificar = true;
            break;
        }
        else if (numeros[mitad] > dato)
        {
            sup = mitad - 1;
        }
        else if (numeros[mitad] < dato)
        {
            inf = mitad + 1;
        }
    }
}