#include <iostream>
#include <stdlib.h>
using namespace std;

struct Nodo
{
    int dato;
    Nodo *der;
    Nodo *izq;
    Nodo *padre;
};
Nodo *arbol = NULL;

Nodo *crearNodo(int, Nodo *);
void insertarNodo(Nodo *&, int, Nodo *);
void mostrarArbol(Nodo *, int);
bool busqueda(Nodo *, int);
void preOrden(Nodo *);
void inOrden(Nodo *);
void postOrden(Nodo *);
void eliminar(Nodo *, int);
void eliminarNodo(Nodo *);
Nodo *minimo(Nodo *);
void reemplazar(Nodo *, Nodo *);
void destruirNodo(Nodo *);

int main()
{
    /*Un árbol consta de un número finito de elementos, denominados nodos
    y un conjunto finito de líneas dirigidas, denominadas ramas, que conectan los nodos
    Árbol binario de búsqueda (ABB).- Es aquel que dado un nodo, todos los datos del subárbol
    izquierdo son menores, mientras que todos los datos del subárbol derecho son mayores*/

    //Insertar elementos
    insertarNodo(arbol, 10, NULL);
    insertarNodo(arbol, 5, NULL);
    insertarNodo(arbol, 15, NULL);
    insertarNodo(arbol, 3, NULL);
    insertarNodo(arbol, 8, NULL);
    insertarNodo(arbol, 12, NULL);
    insertarNodo(arbol, 20, NULL);
    insertarNodo(arbol, 6, NULL);
    insertarNodo(arbol, 9, NULL);
    insertarNodo(arbol, 30, NULL);
    insertarNodo(arbol, 7, NULL);

    //Mostrar elementos
    int contador = 0;
    mostrarArbol(arbol, contador);
    cout << endl;

    //Buscar nodo
    if (busqueda(arbol, 2) == true)
    {
        cout << "El elemento SI fue encontrado" << endl;
    }
    else
    {
        cout << "El elemento NO fue encontrado" << endl;
    }
    cout << endl;

    //Recorrido de un árbol en PreOrden
    preOrden(arbol);
    cout << endl;

    //Recorrido de un árbol en InOrden
    inOrden(arbol);
    cout << endl;

    //Recorrido de un árbol en PostOrden
    postOrden(arbol);
    cout << endl;

    //Eliminar nodo de un árbol
    eliminar(arbol, 5);
    eliminar(arbol, 20 );
    eliminar(arbol, 9);
    mostrarArbol(arbol, 0);
}

Nodo *crearNodo(int n, Nodo *padre)
{
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->der = NULL;
    nuevo_nodo->izq - NULL;
    nuevo_nodo->padre = padre;
}
void insertarNodo(Nodo *&arbol, int n, Nodo *padre)
{
    if (arbol == NULL)
    {
        Nodo *nuevo_nodo = crearNodo(n, padre);
        arbol = nuevo_nodo;
    }
    else
    {
        int valorRaiz = arbol->dato;
        if (n < valorRaiz)
        {
            insertarNodo(arbol->izq, n, arbol);
        }
        else
        {
            insertarNodo(arbol->der, n, arbol);
        }
    }
}
void mostrarArbol(Nodo *arbol, int cont)
{
    if (arbol == NULL)
    {
        return;
    }
    else
    {
        mostrarArbol(arbol->der, cont + 1);
        for (int i = 0; i < cont; i++)
        {
            cout << "   ";
        }
        cout << arbol->dato << endl;
        mostrarArbol(arbol->izq, cont + 1);
    }
}
bool busqueda(Nodo *arbol, int n)
{
    if (arbol == NULL)
    {
        return false;
    }
    else if (arbol->dato == n)
    {
        return true;
    }
    else if (n < arbol->dato)
    {
        busqueda(arbol->izq, n);
    }
    else
    {
        busqueda(arbol->der, n);
    }
}
void preOrden(Nodo *arbol)
{
    if (arbol == NULL)
    {
        return;
    }
    else
    {
        cout << arbol->dato << " - ";
        preOrden(arbol->izq);
        preOrden(arbol->der);
    }
}
void inOrden(Nodo *arbol)
{
    if (arbol == NULL)
    {
        return;
    }
    else
    {
        inOrden(arbol->izq);
        cout << arbol->dato << " - ";
        inOrden(arbol->der);
    }
}
void postOrden(Nodo *arbol)
{
    if (arbol == NULL)
    {
        return;
    }
    else
    {
        postOrden(arbol->izq);
        postOrden(arbol->der);
        cout << arbol->dato << " - ";
    }
}
void eliminar(Nodo *arbol, int n)
{
    if (arbol == NULL)
    {
        return;
    }
    else if (n < arbol->dato)
    {
        eliminar(arbol->izq, n);
    }
    else if (n > arbol->dato)
    {
        eliminar(arbol->der, n);
    }
    else
    {
        eliminarNodo(arbol);
    }
}
void eliminarNodo(Nodo *nodoEliminar)
{
    if (nodoEliminar->izq && nodoEliminar->der)
    {
        Nodo *menor = minimo(nodoEliminar->der);
        nodoEliminar->dato = menor->dato;
        eliminarNodo(menor);
    }
    else if (nodoEliminar->izq)
    {
        reemplazar(nodoEliminar, nodoEliminar->izq);
        destruirNodo(nodoEliminar);
    }
    else if (nodoEliminar->der)
    {
        reemplazar(nodoEliminar, nodoEliminar->der);
        destruirNodo(nodoEliminar);
    }
    else
    {
        reemplazar(nodoEliminar, NULL);
        destruirNodo(nodoEliminar);
    }
}
Nodo *minimo(Nodo *arbol)
{
    if (arbol == NULL)
    {
        return NULL;
    }
    if (arbol->izq)
    {
        return minimo(arbol->izq);
    }
    else
    {
        return arbol;
    }
}
void reemplazar(Nodo *arbol, Nodo *nuevoNodo)
{
    if (arbol->padre)
    {
        if (arbol->dato == arbol->padre->izq->dato)
        {
            arbol->padre->izq = nuevoNodo;
        }
        else if (arbol->dato == arbol->padre->der->dato)
        {
            arbol->padre->der = nuevoNodo;
        }
    }
    if (nuevoNodo)
    {
        nuevoNodo->padre = arbol->padre;
    }
}
void destruirNodo(Nodo *nodo)
{
    nodo->izq = NULL;
    nodo->der = NULL;
    delete nodo;
}
