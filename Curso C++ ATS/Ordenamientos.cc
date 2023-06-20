#include <iostream>
using namespace std;
int main()
{
    //Método burbuja
    int numeros1[] = {4, 1, 2, 3, 5};
    int i, j, aux;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (numeros1[j] > numeros1[j + 1])
            {
                aux = numeros1[j];
                numeros1[j] = numeros1[j + 1];
                numeros1[j + 1] = aux;
            }
        }
    }

    //Ordenamiento por inserción
    int numeros2[] = {4, 1, 2, 3, 5};
    int pos;
    for (i = 0; i < 5; i++)
    {
        pos = i;
        aux = numeros2[i];

        while ((pos > 0) && (numeros2[pos - 1] > aux))
        {
            numeros2[pos] = numeros2[pos - 1];
            pos--;
        }
        numeros2[pos] = aux;
    }

    //Ordenamiento por selección
    int numeros3[] = {4, 1, 2, 3, 5};
    int min;
    for (i = 0; i < 5; i++)
    {
        min = i;
        for (j = i + 1; j < 5; j++)
        {
            if (numeros3[j] < numeros3[min])
            {
                min = j;
            }
        }
        aux = numeros3[i];
        numeros3[i] = numeros3[min];
        numeros3[min] = aux;
    }
}