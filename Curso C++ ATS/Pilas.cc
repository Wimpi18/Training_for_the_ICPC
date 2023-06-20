#include <iostream>
#include <stdlib.h>
using namespace std;

struct Nodo
{
    int dato;
    Nodo *siguiente;
};
void agregarPila(Nodo *&, int);
void sacarPila(Nodo *&, int &);
int main()
{
    /*Una pila es una estructura de datos ordenadas tales que
    solo se puede introducir o eliminar por un extremo, llamado cima (LIFO)*/

    //Insertar elementos
    Nodo *pila = NULL;
    int n1 = 8, n2 = 12;
    agregarPila(pila, n1);
    agregarPila(pila, n2);

    //Quitar elementos
    sacarPila(pila, n2);
    sacarPila(pila, n1);
}

void agregarPila(Nodo *&pila, int n)
{
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;
    cout << "El elemento " << n << " se agrego correctamente" << endl;
}
void sacarPila(Nodo *&pila, int &n)
{
    Nodo *aux = pila;
    n = aux->dato;
    pila = aux->siguiente;
    delete aux;
    cout << "El elemento " << n << " se elimino correctamente" << endl;
}