#include <iostream>
#include <stdlib.h> //Funciona new y delete
using namespace std;

void pedirNotas();
int numCalif, *calif;
void mostrarNotas();

void intercambio(float *, float *);

int hallarMax(int *, int);

void pedirDatos();
int **puntero_matriz, nFilas, nCol;
void mostrarDatos(int **, int, int);

struct Persona
{
    string nombre;
    int edad;
} persona, *puntero_persona = &persona;
void mostrarPersona(Persona *);
int main()
{
    /*Declaración de punteros
    &n = La dirección de n
    *n = La variable cuya dirección está almacenada en n*/
    int num, *dir_num;
    num = 20;
    dir_num = &num;
    cout << "Numero: " << *dir_num << endl;
    cout << "Direccion de memoria: " << dir_num << endl;

    //Correspondencia entre arreglos y punteros
    int numeros[] = {1, 2, 3, 4, 5};
    int *dir_numeros;
    dir_numeros = numeros; //dir_numeros = &numeros[0];
    for (int i = 0; i < 5; i++)
    {
        cout << "Elemento del vector [" << i << "]: " << *dir_numeros << endl;
        cout << "Posicion de memoria de " << numeros[i] << " es: " << dir_numeros << endl;
        dir_numeros++;
    }
    cout << endl;
    /*Asignación dinámica de arreglos
    new: Reserva el número de bytes solicitado por la declaración
    delete: Libera un bloque de bytes reservado con anterioridad
    Ejemplo: Pedir al usuario n calificaciones y almacenarlas en un arreglo dinámico*/
    pedirNotas();
    mostrarNotas();

    delete[] calif; //Liberamos memoria en bytes utilizados anteriormente
    cout << endl;

    /*Transmisión de direcciones
    Ejemplo: Intercambiar el valor de 2 variables*/
    float num1 = 20.8, num2 = 6.78;
    cout << "Primer variable: " << num1 << endl;
    cout << "Segundo variable: " << num2 << endl;
    intercambio(&num1, &num2);
    cout << endl;
    cout << "Primer variable: " << num1 << endl;
    cout << "Segundo variable: " << num2 << endl;
    cout << endl;

    /*Transmisión de arreglos
    Ejemplo: Hallar el máximo elemento de un arreglo*/
    const int nElementos = 5;
    int numbers[nElementos] = {3, 5, 2, 8, 1};
    cout << "El mayor elemento del arreglo es: " << hallarMax(numbers, nElementos) << endl;
    cout << endl;

    /*Matrices dinámicas
    Ejemplo: Rellenar una matriz NxM y mostrar su contenido
    
    **puntero_matriz -> *puntero_fila -> [int] [int] [int]
                        *puntero_fila -> [int] [int] [int]
                        *puntero_fila -> [int] [int] [int]*/
    pedirDatos();
    mostrarDatos(puntero_matriz, nFilas, nCol);
    //Liberar memoria
    for (int i = 0; i < nFilas; i++)
    {
        delete[] puntero_matriz[i];
    }
    delete[] puntero_matriz;
    cout << endl;

    //Punteros a estructuras
    puntero_persona->nombre = "Winsor";
    puntero_persona->edad = 19;
    mostrarPersona(puntero_persona);
}

void pedirNotas()
{
    cout << "Digite el numero de calificaciones: " << endl;
    cin >> numCalif;
    calif = new int[numCalif];
    for (int i = 0; i < numCalif; i++)
    {
        cout << "Ingrese una nota: " << endl;
        cin >> calif[i];
    }
}
void mostrarNotas()
{
    cout << "\nMostrando notas del usuario:\n";
    for (int i = 0; i < numCalif; i++)
    {
        cout << calif[i] << endl;
    }
}

void intercambio(float *dirNm1, float *dirNm2)
{
    float aux;
    aux = *dirNm1;
    *dirNm1 = *dirNm2;
    *dirNm2 = aux;
}

int hallarMax(int *dirVec, int nElementos)
{
    int max = 0;
    for (int i = 0; i < nElementos; i++)
    {
        if (*(dirVec + i) > max)
        {
            max = *(dirVec + i);
        }
    }
    return max;
}

void pedirDatos()
{
    cout << "Digite el numero de filas:" << endl;
    cin >> nFilas;
    cout << "Digite el numero de columnas:" << endl;
    cin >> nCol;

    puntero_matriz = new int *[nFilas]; //Resevando memoria para las filas
    for (int i = 0; i < nFilas; i++)
    {
        puntero_matriz[i] = new int[nCol]; //Resevando memoria para las columnas
    }

    cout << "\nDigitando elementos de la matriz: ";
    for (int i = 0; i < nFilas; i++)
    {
        for (int j = 0; j < nCol; j++)
        {
            cout << "Digite un numero en la pos. [" << i << "][" << j << "]:" << endl;
            cin >> *(*(puntero_matriz + i) + j); //puntero_matriz[i][j];
        }
    }
}
void mostrarDatos(int **puntero_matriz, int nFilas, int nCol)
{
    cout << "\n\nImprimiendo matriz:\n";
    for (int i = 0; i < nFilas; i++)
    {
        for (int j = 0; j < nCol; j++)
        {
            cout << *(*(puntero_matriz + i) + j) << endl;
        }
    }
}

void mostrarPersona(Persona *puntero_persona)
{
    cout << "Nombre: " << puntero_persona->nombre << endl;
    cout << "Edad: " << puntero_persona->edad << endl;
}