#include <iostream>
using namespace std;
int main()
{
    /*Es un tipo de dato que almacena una secuencia de datos del mismo tipo. Los elementos de un vector
    se almacenan en zonas contiguas de memoria y se puede acceder a ellos de manera directa mediante
    un índice oo posición
    
    tipo nombre[];*/
    int numeros[10];
    char vocales[] = {'a', 'e', 'i', 'o', 'u'};

    /*Escribe un programa que defina un vector de números y calcule la multiplicación acumulada
    de sus elementos*/
    int array[] = {2, 3, 1, 6, 7, 3};
    int resultado = 1;
    int length = sizeof(array) / sizeof(int);
    for (int i = 0; i < length; i++)
    {
        resultado *= array[i];
    }
    cout << "El resultado es: " << resultado << endl;

    /*Escribe un programa que defina un vector de número y muestre en la salida estándar el vector en orden inverso
    del último al primer elemento*/
    int i = length - 1;
    for (i; i >= 0; i--)
    {
        cout << array[i] << endl;
    }

    /*Escribe un programa que defina un vector de número y calcule si existe algún número en el vector cuyo valor
    equivale a la suma del resto de números del vector*/
    int array2[] = {1, 2, 3, -4};
    length = sizeof(array2) / sizeof(int);
    for (i = 0; i < length; i++)
    {
        int verificador = 0;
        for (int j = 0; j < length; j++)
        {
            verificador += array2[j];
        }
        verificador -= array2[i];
        if (verificador == array2[i])
        {
            cout << "El numero: " << array2[i] << " es una suma del resto de numeros del vector" << endl;
        }
    }

    /*Hacer una programa que lea 5 números en un arreglo, los copie a otro arreglo multiplicados por 2
    y muestre el segundo arreglo*/
    int array3[] = {1, 2, 3, 4, 5};
    int array4[5];
    int numero;
    for (i = 0; i < 5; i++)
    {
        array4[i] = array3[i] * 2;
    }
    cout << "Imprimiendo el arreglo 4" << endl;
    for (i = 0; i < 5; i++)
    {
        cout << array4[i] << endl;
    }
}