/*Una función realiza una tarea concreata y puede ser
    diseñada, implementada y depurada de manera independiente al resto del código
    tipo nombre(tipo var1, tipo var2,...tipo varn){
        conjunto de instrucciones;
        return;
    }
    
    Estructura de una buena programación:
    directivas del preprocesador
    
    prototipos de función
    
    int main(){
        conjunto de instrucciones;
        return valor;
    }
    
    definiciones de función*/
#include <iostream>
using namespace std;

int encontrarMax(int x, int y);

template <class TIPOD>
void mostrarABS(TIPOD numero);

template <class TIP>
TIP parteFraccionaria(TIP numero);

void valNuevo(int &, int &);

void calcular(int, int, int &, int &);

void cuadrado(int vec[], int tam);
void muestra(int vec[], int tam);

void cuadrado(int matriz[][3], int, int);
void muestra(int matriz[][3], int, int);

struct Persona
{
    string nombre;
    int edad;
} p1;
void pedirDatos();
void mostrarDatos(Persona);

int factorial(int);

int main()
{
    //Introducción
    int n1, n2, mayor;
    cout << "Digite 2 numeros" << endl;
    cin >> n1 >> n2;
    mayor = encontrarMax(n1, n2);
    cout << "El numero mayor es: " << mayor << endl;

    //Plantillas de función, sirven para hacer un tipo de dato general
    int num1 = 4;
    float num2 = 58.43;
    double num3 = -123.4221;
    mostrarABS(num1);
    mostrarABS(num2);
    mostrarABS(num3);

    //Ejercicio 4
    double num56 = 256.879;
    cout << "La parte fraccionaria es: " << parteFraccionaria(num56) << endl;

    //Paso de parámetros por referencia
    int number1 = 4, number2 = 5;
    valNuevo(number1, number2);
    cout << "El nuevo valor del primer numero es " << number1 << endl;
    cout << "El nuevo valor del segundo numero es " << number2 << endl;

    //Devolver valores multiples
    int numerito1 = 2, numerito2 = 3, suma, producto;
    calcular(numerito1, numerito2, suma, producto);
    cout << "La suma es: " << suma << endl;
    cout << "La multiplicacion es: " << producto << endl;

    //Paso de parámetros de tipo vector
    const int TAM = 5;
    int vec[TAM] = {1, 2, 3, 4, 5};
    cuadrado(vec, TAM);
    muestra(vec, TAM);

    //Paso de parámetros de tipo matriz
    const int NFILAS = 2;
    const int NCOL = 3;
    int m[NFILAS][NCOL] = {{1, 2, 3}, {4, 5, 6}};
    cuadrado(m, NFILAS, NCOL);
    muestra(m, NFILAS, NCOL);

    //Paso de parámetros de tipo estructura
    pedirDatos();
    mostrarDatos(p1);

    //Recursividad, es una función que se llama a ella misma
    int numeroEjemplo = 5;
    cout << "El factorial de " << numeroEjemplo << " es " << factorial(numeroEjemplo) << endl;
}

int encontrarMax(int x, int y)
{
    int numMax;
    if (x > y)
    {
        numMax = x;
    }
    else
    {
        numMax = y;
    }
    return numMax;
}

template <class TIPOD>
void mostrarABS(TIPOD numero)
{
    if (numero < 0)
    {
        numero = numero * -1;
    }
    cout << "El valor absoluto del numero es: " << numero << endl;
}

template <class TIP>
TIP parteFraccionaria(TIP numero)
{
    string num = to_string(numero);
    string newNum = "0";
    int i = 0;
    while (num[i] != '.')
    {
        i++;
    }
    for (i; i < num.size(); i++)
    {
        newNum += num[i];
    }
    TIP part = atof(newNum.c_str());
    return part;
}

void valNuevo(int &xnum, int &ynum)
{
    cout << "El valor inicial del primer numero es: " << xnum << endl;
    cout << "El valor inicial del segundo numero es: " << ynum << endl;
    xnum = 10;
    ynum = 100;
}

void calcular(int n1, int n2, int &suma, int &producto)
{
    suma = n1 + n2;
    producto = n1 * n2;
}

void cuadrado(int vec[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        vec[i] = vec[i] * vec[i];
    }
}
void muestra(int vec[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        cout << vec[i] << endl;
    }
}

void cuadrado(int matriz[][3], int filas, int columnas)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz[i][j] *= matriz[i][j];
        }
    }
}
void muestra(int matriz[][3], int filas, int columnas)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << matriz[i][j] << endl;
        }
    }
}

void pedirDatos()
{
    cout << "Digite su nombre: " << endl;
    cin >> p1.nombre;
    cout << "Digite su edad: " << endl;
    cin >> p1.edad;
}
void mostrarDatos(Persona p)
{
    cout << p.nombre << endl;
    cout << p.edad << endl;
}

int factorial(int n)
{
    if (n == 0)
    {
        n = 1;
    }
    else
    {
        n = n * factorial(n - 1);
    }
    return n;
}