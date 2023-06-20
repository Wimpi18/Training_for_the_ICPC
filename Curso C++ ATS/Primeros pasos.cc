
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    //Mi primer programa en C++
    cout<<"Hola mundo"<<endl;

    //Tipos de datos básicos en C++
    int entero = 15;
    float flotante = 10.45;
    double mayor = 16.3456;
    char letra = 'a';

    //Lectura o entrada de datos
    int numero;
    cout<<"Digite un numero"<<endl;
    cin>>numero;
    cout<<"El numero que digito es: "<<numero<<endl;

    /*Escribe un programa que lea de la entrada estandar dos numeros y muestre
    en la salida estandar su suma, resta, multipliacion y division*/
    int n1, n2, suma, resta, multiplicacion, division;
    cout<<"Ingrese dos numeros"<<endl;
    cin>>n1>>n2;
    suma = n1 + n2;
    resta = n1 - n2;
    multiplicacion = n1 * n2;
    division = n1/n2;
    cout<<"Suma: "<<suma<<endl;
    cout<<"Resta: "<<resta<<endl;
    cout<<"Multiplicacion: "<<multiplicacion<<endl;
    cout<<"Division: "<<division<<endl;

    //Escribe la siguiente expresion (imagen en ATS 6)
    double a, b, c, d, resultado;
    cout<<"Ingrese valores para a, b, c, d respectivamente"<<endl;
    cin>>a>>b>>c>>d;
    resultado = (a+b)/(c+d);
    cout.precision(2); //Cuantos digitos de precision quiero imprimir
    cout<<"El resultado es: "<<resultado<<endl;

    //Escribe un programa que calcule las soluciones de una ecuacion de segundo grado
    double x1, x2;
    a, b, c; //Ya estaban previamente declaradas
    cout<<"Ingrese valores para a, b, c respectivamente"<<endl;
    cin>>a>>b>>c;
    x1 = (-b+sqrt( pow(b, 2)-(4*a*c) ))/(2*a);
    x2 = (-b-sqrt( pow(b, 2)-(4*a*c) ))/(2*a);
    cout<<"Las raices de la ecuacion son: "<<x1<<" y "<<x2<<endl;
}