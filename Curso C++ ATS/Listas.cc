#include <iostream>
#include <stdlib.h>
using namespace std;

struct Nodo
{
    int dato;
    Nodo *siguiente;
};

void insertarLista(Nodo *&, int);
void mostrarLista(Nodo *);
void buscarLista(Nodo *, int);
void eliminarElemento(Nodo *&, int);
void eliminarLista(Nodo *&, int &);

int main()
{
    /*Consta de un número de nodos con dos componentes(campos), un enlace
    al siguiente nodo de la lista y un valor, que puede ser de cualquier tipo.
    Existe 4 tipos de listas enlazadas:
    1) Listas simplemente enlazadas
    2) Listas doblemente enlazadas
    3) Lista circular simplemente enlazada
    4) Lista circular doblemente enlazada*/
    Nodo *lista = NULL;

    //Insertar elementos
    int dato = 15;
    insertarLista(lista, dato);
    dato = 2;
    insertarLista(lista, dato);
    dato = 5;
    insertarLista(lista, dato);

    //Mostrar elementos
    mostrarLista(lista);

    //Buscar elementos
    buscarLista(lista, 5);

    //Eliminar un elemento de la lista
    eliminarElemento(lista, 5);

    //Eliminar todos los elementos de la lista
    eliminarLista(lista, dato);
}

void insertarLista(Nodo *&lista, int n)
{
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;

    Nodo *aux1 = lista;
    Nodo *aux2;

    while ((aux1 != NULL) && (aux1->dato < n))
    {
        aux2 = aux1;
        aux1 = aux1->siguiente;
    }
    if (lista == aux1)
    {
        lista = nuevo_nodo;
    }
    else
    {
        aux2->siguiente = nuevo_nodo;
    }
    nuevo_nodo->siguiente = aux1;
}
void mostrarLista(Nodo *lista)
{
    Nodo *actual = new Nodo();
    actual = lista;
    while (actual != NULL)
    {
        cout << actual->dato << "->";
        actual = actual->siguiente;
    }
    cout << endl;
}
void buscarLista(Nodo *lista, int n)
{
    bool band = false;

    Nodo *actual = new Nodo();
    actual = lista;

    while ((actual != NULL) && (actual->dato <= n))
    {
        if (actual->dato == n)
        {
            band = true;
        }
        actual = actual->siguiente;
    }

    if (band == true)
    {
        cout << "Elemento " << n << " SI existe en la lista \n";
    }
    else
    {
        cout << "Elemento " << n << " NO existe en la lista \n";
    }
}
void eliminarElemento(Nodo *&lista, int n)
{
    if (lista != NULL)
    {
        Nodo *aux_borrar;
        Nodo *anterior = NULL;
        aux_borrar = lista;

        while ((aux_borrar != NULL) && (aux_borrar->dato != n))
        {
            anterior = aux_borrar;
            aux_borrar = aux_borrar->siguiente;
        }

        if (aux_borrar == NULL)
        {
            cout << "El elemento no existe" << endl;
        }
        else if (anterior == NULL)
        {
            lista = lista->siguiente;
            delete aux_borrar;
        }
        else
        {
            anterior->siguiente = aux_borrar->siguiente;
            delete aux_borrar;
        }
    }
}
void eliminarLista(Nodo *&lista, int &n)
{
    Nodo *aux = lista;
    n = aux->dato;
    lista = aux->siguiente;
    delete aux;
}