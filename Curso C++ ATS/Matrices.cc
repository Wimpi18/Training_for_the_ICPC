#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    /*Una matriz es un vector de vectores o también llamado array bidimensional. La manera
    de declarar una matriz en C++ es similar a un vector
    tipo nombre[nfilas][ncolumnas]
    int numeros[2][3] = {1,2,3, 4,5,6} = {{1,2,3}, {4,5,6}}*/

    /*Realiza un programa que defina una matriz de 3x3 y escriba un ciclo para que
    muestre la diagonal principal de la matriz*/
    int matriz1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int i = 0; i < 3; i++)
    {
        cout << matriz1[i][i] << endl;
    }

    /*Hacer una matriz preguntando al usuario el número de filas y columnas, llenarla de números
    aleatorios, copiar el contenido a la matriz y por último mostrarla en pantalla*/
    int nFilas, nColumnas;
    srand(time(NULL));
    cout << "Ingresa la cantidad de filas y columnas respectivamente" << endl;
    cin >> nFilas >> nColumnas;
    int matriz2[nFilas][nColumnas];
    //Crea la matriz con aleatorios
    for (int i = 0; i < nFilas; i++)
    {
        for (int j = 0; j < nColumnas; j++)
        {
            matriz2[i][j] = rand() % 51;
        }
    }
    //Imprime la matriz
    for (int i = 0; i < nFilas; i++)
    {
        for (int j = 0; j < nColumnas; j++)
        {
            cout << matriz2[i][j] << endl;
        }
    }

    /*Realice un programa que calcule la suma de dos matrices cuadradas de 3x3*/
    int matriz3[3][3] = {{1, 3, 5}, {7, 9, 11}, {13, 15, 17}};
    int matriz4[3][3] = {{2, 4, 6}, {8, 10, 12}, {14, 16, 18}};
    int suma1 = 0, suma2 = 0, sumaTotal;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            suma1 += matriz3[i][j];
            suma2 += matriz4[i][j];
        }
    }
    cout << suma1 << " " << suma2 << endl;
    sumaTotal = suma1 + suma2;
    cout << "La suma total entres las dos matrices es: " << sumaTotal << endl;

    /*Realice un programa que calcule el producto de dos matrices cuadradas de 3x3*/
    int matriz5[3][3] = {{1, 1, 1}, {2, 2, 2}, {3, 3, 3}};
    int matriz6[3][3] = {{4, 4, 4}, {5, 5, 5}, {6, 6, 6}};
    long long producto1 = 1, producto2 = 1, productoTotal;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            producto1 *= matriz5[i][j];
            producto2 *= matriz6[i][j];
        }
    }
    cout << producto1 << " " << producto2 << endl;
    productoTotal = producto1 * producto2;
    cout << "El producto total entres las dos matrices es: " << productoTotal << endl;
}