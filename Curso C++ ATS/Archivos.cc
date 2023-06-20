#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
using namespace std;

void escribir();
void lectura();
void anadir();

int main()
{
    //Escribir en un archivo de texto
    escribir();

    //Leer un archivo de texto
    lectura();

    //Añadir texto en un archivo
    anadir();
}

void escribir()
{
    ofstream archivo;
    archivo.open("C://Users//LENOVO//Desktop//prueba.txt", ios::out);
    if (archivo.fail() == true)
    {
        cout << "No se pudo abrir el archivo" << endl;
        exit(1);
    }
    archivo << "Hola que tal mi nombre es Winsor Orellana";
    archivo.close();
}
void lectura()
{
    ifstream archivo;
    string texto;
    archivo.open("C://Users//LENOVO//Desktop//prueba.txt", ios::in);
    if (archivo.fail() == true)
    {
        cout << "No se pudo abrir el archivo" << endl;
        exit(1);
    }
    while (!archivo.eof())
    {
        getline(archivo, texto);
        cout << texto << endl;
    }
    archivo.close();
}
void anadir()
{
    ofstream archivo;
    archivo.open("C://Users//LENOVO//Desktop//prueba.txt", ios::app);
    if (archivo.fail() == true)
    {
        cout << "No se pudo abrir el archivo" << endl;
        exit(1);
    }
    archivo << "y esto es una prueba para añadir texto";
    archivo.close();
}