#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main()
{
    /*La sentencia while:
    while(expresión lógica){
        conjunto de instrucciones;
    }*/
    int i;
    i = 1;
    while (i <= 10)
    {
        cout << i << endl;
        i++;
    }

    getch(); //Es una función de la librería conio que nos sirve para poder visualizar el programa y que no se cierre instantaneamente una vez finalice

    /*La sentencia do while:
    do{
        conjunto de instrucciones;
    }while(expresión lógica);*/
    i = 10;
    do
    {
        cout << i << endl;
        i--;
    } while (i >= 1);
    system("pause"); //Es similar al getch pero perteneciente a la librería stdlib

    /*La sentencia for:
    for(expr1; expresion lógica; expr2){
        conjunto de instrucciones;
    }*/
    i;
    for (i = 1; i <= 10; i++)
    {
        cout << i << endl;
    }
    getch();

    /*Realice un programa que lea de la entrada estándar números hasta que se introduzca un cero. En
    ese momento el programa debe terminar y mostrar en la salida estándar el número de valores 
    mayores que cero leído*/
    int x, n = 0;
    do
    {
        cout << "Ingrese un numero" << endl;
        cin >> x;
        if (x > 0)
        {
            n++;
        }
    } while (x != 0);
    cout << "La cantidad de numeros ingresados mayores a 0 es: " << n << endl;

    /*Escribe un programa que tome cada 4 horas la temperatura exterior, leyéndola durante un período de 24 horas. Es 
    decir, debe leer la temperatura 6 veces. Calcule la temperatura media del día, la temperatura más alta y la más baja*/
    int temperatura, tiempo, tempMedia = 0, tempAlta = 0, tempBaja = 0;
    for (tiempo = 0; tiempo < 24; tiempo += 4)
    {
        cout << "Ingrese la temperatura de la hora: " << tiempo << endl;
        cin >> temperatura;
        tempMedia += temperatura;
        if (temperatura > tempAlta)
        {
            tempAlta = temperatura;
        }
        if (temperatura < tempBaja || tempBaja == 0)
        {
            tempBaja = temperatura;
        }
    }
    tempMedia = tempMedia / 6;
    cout << "La temperatura media es: " << tempMedia << endl;
    cout << "La temperatura mas alta es: " << tempAlta << endl;
    cout << "La temperatura mas baja es: " << tempBaja << endl;

    /*Escriba un programa que calcule x^y, donde tanto x como y son enteros
    positivos, sin utilizar la funció pow*/
    int y, resultado = 1;
    x; //Declarado anteriormente
    cout << "Ingrese un valor para x" << endl;
    cin >> x;
    cout << "Ingrese un valor para y" << endl;
    cin >> y;
    for (i = 0; i < y; i++)
    {
        resultado = resultado * x;
    }
    cout << "El resultado es: " << resultado << endl;

    /*Escriba un programa que calcule el valor de:
    1+3+5+...+(2n-1)*/
    resultado = 0;
    cout << "Ingresa la cantidad de numeros de la serie" << endl;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        resultado += (2 * i - 1);
    }
    cout << "El resultado con " << n << " digitos es"
         << " es: " << resultado << endl;

    /*Escriba un programa que calcule el valor de:
    1!+2!+3!...+n (Suma de factoriales)*/
    resultado = 0;
    cout << "Ingresa la cantidad de numeros de la serie" << endl;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        int factorial = 1;
        for (int j = i; j >= 1; j--)
        {
            factorial = factorial * j;
        }
        resultado += factorial;
    }
    cout << "El resultado con " << n << " digitos es: " << resultado << endl;

    /*Hacer una programa que calcule el resultado de la siguiente expresión:
    1-2+3-4+5-6...n*/
    resultado = 0;
    cout << "Ingresa la cantidad de numeros de la serie" << endl;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            resultado -= i;
        }
        else
        {
            resultado += i;
        }
    }
    cout << "El resultado con " << n << " digitos es: " << resultado << endl;

    /*Ejercicio 14 ep 28*/
    int alumnos = 5, aprobados = 0, aprob1 = 0, aprobUltimoExamen = 0, nota, contadorExamenes;
    string nombreEstudiante;
    for (i = 0; i < alumnos; i++)
    {
        contadorExamenes = 0;
        //cout << "Ingrese el nombre del estudiante a evaluar" << endl;
        //cin >> nombreEstudiante;
        cout
            << "Ingresa las 3 notas respectivas al estudiante" << endl;
        for (int j = 1; j <= 3; j++)
        {
            cin >> nota;
            if (nota > 51)
            {
                contadorExamenes++;
            }
            if (nota > 51 && j == 3)
            {
                aprobUltimoExamen++;
            }
        }
        if (contadorExamenes > 0)
        {
            aprob1++;
        }
        if (contadorExamenes == 3)
        {
            aprobados++;
        }
    }
    cout << aprobados << " estudiantes aprobaron todos los examenes" << endl;
    cout << aprob1 << " estudiantes aprobaron al menos un examen" << endl;
    cout << aprobUltimoExamen << " estudiantes aprobaron el ultimo examen" << endl;

    /*Realice un programa que calcule la descomposición en factores primos de un número entero
    Por ejemplo: 20 = 2*2*5*/
    cout << "Ingrese el numero que desea descomponer" << endl;
    cin >> n;
    int mitadf = n / 2;                   // Estas tres líneas permiten concluir el
    int mitad = static_cast<int>(mitadf); // cálculo cuando el valor "i" llegue a la mitad de "número",
    mitad++;                              // ahorrando tiempo de ejecución.

    for (int i = 2; i <= mitad; i++)
    {

        int residuo = n % i;
        while (residuo == 0)
        {
            cout << i << ", ";
            n /= i;
            residuo = n % i;
        }
    }
    cout << "\nArriba aparecen los factores primos. Si no hay valores, el numero es primo.";
}