#include <iostream>
#include <stdlib.h>
using namespace std;

struct Nodo
{
    int dato;
    Nodo *siguiente;
};
bool colaVacia(Nodo *);
void insertarCola(Nodo *&, Nodo *&, int);
void suprimirCola(Nodo *&, Nodo *&, int &);

int main()
{
    /*Una cola es una estructura de datos, caracterizada por ser una secuencia de elementos
    en la que la operación de inserción se realiza por un extremo
    y la extracción por el otro (FIFO)*/
    //Insertar elementos
    Nodo *frente = NULL;
    Nodo *fin = NULL;

    int n1 = 3, n2 = 7;
    insertarCola(frente, fin, n1);
    insertarCola(frente, fin, n2);

    suprimirCola(frente, fin, n1);
    suprimirCola(frente, fin, n2);
}

bool colaVacia(Nodo *frente)
{
    return (frente == NULL) ? true : false;
    /*Es lo mismo que escribir:
    if (frente == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }*/
}
void insertarCola(Nodo *&frente, Nodo *&fin, int n)
{
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = NULL;
    if (colaVacia(frente))
    {
        frente = nuevo_nodo;
    }
    else
    {
        fin->siguiente = nuevo_nodo;
    }
    fin = nuevo_nodo;
    cout << "El elemento " << n << " fue agregado correctamente" << endl;
}
void suprimirCola(Nodo *&frente, Nodo *&fin, int &n)
{
    n = frente->dato;
    Nodo *aux = frente;
    if (frente == fin)
    {
        frente == NULL;
        fin = NULL;
    }
    else
    {
        frente = frente->siguiente;
    }
    delete aux;
    cout << "El elemento " << n << " fue eliminado correctamente" << endl;
}