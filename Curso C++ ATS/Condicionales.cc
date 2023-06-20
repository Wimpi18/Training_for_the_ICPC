#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    /*La sentencia if
        if(condición){
            Instrucciones 1;
        } else{
            Instrucciones 2;
        }*/
    int numero, dato = 5;
    cout << "Digite un numero" << endl;
    cin >> numero;
    if (numero == dato)
    {
        cout << "El numero es igual a 5" << endl;
    }
    else
    {
        cout << "El numero es diferente de 5" << endl;
    }
    /*OPERADORES
    https://docs.microsoft.com/es-es/cpp/cpp/cpp-built-in-operators-precedence-and-associativity?view=msvc-160*/

    /*La sentencia switch
        switch(expresion){
            case literal1:
                conjunto de instrucciones1;
                break;
            case literal2:
                conjunto de instrucciones2;
                break;
            case literaln:
                conjunto de instruccionesn;
                break;
            default:
                conjunto de instrucciones por defecto;
                break;*/
    cout << "Digite un numero entre 1-5" << endl;
    cin >> numero;
    switch (numero)
    {
    case 1:
        cout << "Es el numero 1" << endl;
        break;
    case 2:
        cout << "Es el numero 2" << endl;
        break;
    case 3:
        cout << "Es el numero 3" << endl;
        break;
    case 4:
        cout << "Es el numero 4" << endl;
        break;
    case 5:
        cout << "Es el numero 5" << endl;
        break;
    default:
        cout << "No esta en el rango de 1-5" << endl;
        break;
    }

    //Escribe un programa que lea tres numeros y determine cual de ellos es mayor
    int a, b, c, mayor;
    cout << "Ingrese 3 numeros" << endl;
    cin >> a >> b >> c;
    if (a > b)
    {
        mayor = a;
    }
    else
    {
        mayor = b;
    }
    if (c > mayor)
    {
        mayor = c;
    }
    cout << "El numero mayor es: " << mayor << endl;

    //Comprobar si un numero digitado por el usuario es positivo o negativo
    cout << "Ingrese un numero" << endl;
    cin >> numero;
    if (numero > 0)
    {
        cout << "El numero es positivo" << endl;
    }
    else if (numero == 0)
    {
        cout << "El numero es 0" << endl;
    }
    else
    {
        cout << "El numero es negativo" << endl;
    }

    /*Escriba un programa que lea de la entrada estándar un carácter e indique en la salida estándar
    si el caracter es una vocal minúscula, es una vocal mayúscula o no es una vocal*/
    char vocal;
    cout << "Ingrese una vocal" << endl;
    cin >> vocal;
    switch (vocal)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout << "Es una vocal minuscula" << endl;
        break;
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        cout << "Es una vocal mayuscula" << endl;
        break;
    default:
        cout << "No es una vocal" << endl;
        break;
    }

    /*Escribe un programa que lea de la entrada estándar tres números. Después debe leer
    un cuarto número e indicar si el número coincide con alguno de los introducidos con anterioridad*/
    int primero, segundo, tercero, cuarto;
    cout << "Ingresa 3 numeros" << endl;
    cin >> primero >> segundo >> tercero;
    cout << "Ingresa el 4to numero" << endl;
    cin >> cuarto;
    if (cuarto == primero || cuarto == segundo || cuarto == tercero)
    {
        cout << "El cuarto numero ingresado coincide con uno de los anteriores" << endl;
    }
    else
    {
        cout << "El cuarto numero ingresado no coincide con ninguno" << endl;
    }

    /*Mostrar los meses del año, pidiendole al usuario que ingrese un numero entre 1-12
    y mostrar el mes al que corresponde*/
    cout << "Ingrese un numero entre 1-12" << endl;
    cin >> numero;
    switch (numero)
    {
    case 1:
        cout << "El numero corresponde a Enero" << endl;
        break;
    case 2:
        cout << "El numero corresponde a Febrero" << endl;
        break;
    case 3:
        cout << "El numero corresponde a Mazro" << endl;
        break;
    case 4:
        cout << "El numero corresponde a Abril" << endl;
        break;
    case 5:
        cout << "El numero corresponde a Mayo" << endl;
        break;
    case 6:
        cout << "El numero corresponde a Junio" << endl;
        break;
    case 7:
        cout << "El numero corresponde a Julio" << endl;
        break;
    case 8:
        cout << "El numero corresponde a Agosto" << endl;
        break;
    case 9:
        cout << "El numero corresponde a Septiembre" << endl;
        break;
    case 10:
        cout << "El numero corresponde a Octubre" << endl;
        break;
    case 11:
        cout << "El numero corresponde a Noviembre" << endl;
        break;
    case 12:
        cout << "El numero corresponde a Diciembre" << endl;
        break;
    default:
        cout << "El numero no corresponde a ningun mes" << endl;
        break;
    }

    //Hacer un menú que considere las siguientes opciones
    int opcion;
    cout << "Ingrese un numero" << endl;
    cin >> numero;
    cout << "Menu de opciones" << endl;
    cout << "Opcion 1: Cubo de un numero" << endl;
    cout << "Opcion 2: Numero par o impar" << endl;
    cout << "Opcion 3: Salir" << endl;
    cin >> opcion;
    switch (opcion)
    {
    case 1:
        numero = pow(numero, 3);
        cout << "El numero ingresado, al cubo es: " << numero << endl;
        break;
    case 2:
        if (numero % 2 == 0)
        {
            cout << "El numero ingresado es par" << endl;
        }
        else
        {
            cout << "El numero ingresado es impar" << endl;
        }
        break;
    case 3:
        break;
    default:
        cout << "No existe la opcion ingresada" << endl;
        break;
    }
}