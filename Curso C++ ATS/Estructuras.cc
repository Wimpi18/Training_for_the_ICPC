#include <iostream>
using namespace std;
/*Es una colección de uno o más tipos de elementos denominados campos, cada uno de los cuales
    puede ser un tipo de dato diferente*/
struct Coleccion_CD
{
    char titulo[30];
    char artista[25];
    int numCanciones;
    float precio;
    char fecha_compra[20];
} CD1 = {"YHLQMDLH", "Benito", 12, 200, "12/01/20"},
  CD2 = {"Ultimo Tour", "Benito", 5, 200, "19/01/20"};

/*Estructura anidada: es una estructura dentro de otra*/
struct infoDireccion
{
    char direccion[30];
    char ciudad[20];
    char provincia[20];
};
struct empleado
{
    char nombre[20];
    struct infoDireccion dirEmpleado;
    double salario;
} empleado[2];

//Ejercicio 8
struct persona
{
    string nombre;
    bool discapacidad;
} persona[5], discapacitados[3], noDiscapacitados[2];

int main()
{
    cout << "Titulo1: " << CD1.titulo << endl;
    cout << "Precio1: " << CD1.precio << endl;

    //Estructuras anidadas
    for (int i = 0; i < 2; i++)
    {
        cout << "Digite su nombre: " << endl;
        cin.getline(empleado[i].nombre, 20, '\n');
        cout << "Digite su direccion: " << endl;
        cin.getline(empleado[i].dirEmpleado.direccion, 30, '\n');
        cout << "Ciudad: " << endl;
        cin.getline(empleado[i].dirEmpleado.ciudad, 20, '\n');
        cout << "Provincia: " << endl;
        cin.getline(empleado[i].dirEmpleado.provincia, 20, '\n');
        cout << "Salario: " << endl;
        cin >> (empleado[i].salario);
    }

    /*Defina una estructura que sirva para... Ej 8, Capítulo 62*/
    persona[0] = {"Juan", true};
    persona[1] = {"Amadeo", false};
    persona[2] = {"Spencer", true};
    persona[3] = {"Winsor", true};
    persona[4] = {"Alex", false};
    int j = 0, k = 0;
    for (int i = 0; i < 5; i++)
    {
        if (persona[i].discapacidad == true)
        {
            discapacitados[j].nombre = persona[i].nombre;
            j++;
        }
        else
        {
            noDiscapacitados[k].nombre = persona[i].nombre;
            k++;
        }
    }
    cout << "Las personas con discapacidad son: " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << discapacitados[i].nombre << endl;
    }
    cout << "Las personas sin discapacidad son: " << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << noDiscapacitados[i].nombre << endl;
    }
}