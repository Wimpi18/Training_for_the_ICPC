#include <iostream>
#include <stdlib.h>
using namespace std;

//1)
class Persona
{
private: //Atributos
    string nombre;
    int edad;

public:                   //Métodos
    Persona(int, string); //Constructor
    void leer();
    void correr();
    void mostrarPersona();
    virtual void mostrar(); //Polimorfismo
};
//Constructor
Persona::Persona(int e, string nom)
{
    edad = e;
    nombre = nom;
}
void Persona::leer()
{
    cout << "Soy " << nombre << " y estoy leyendo un libro" << endl;
}
void Persona::correr()
{
    cout << "Soy " << nombre << " y estoy corriendo una maraton con " << edad << " años" << endl;
}
void Persona::mostrarPersona()
{
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
}
void Persona::mostrar()
{
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
}
//2)
class Fecha
{
private:
    int dia, mes, gestion;

public:
    Fecha(int, int, int);
    Fecha(long);
    void mostrarFecha();
};
//Constructor 1
Fecha::Fecha(int d, int m, int g)
{
    gestion = g;
    mes = m;
    dia = d;
}
//Constructor 2
Fecha::Fecha(long fecha)
{
    gestion = int(fecha / 10000);
    mes = int((fecha - gestion * 10000) / 100);
    dia = int(fecha - gestion * 10000 - mes * 100);
}
void Fecha::mostrarFecha()
{
    cout << "La fecha es: " << dia << "/" << mes << "/" << gestion << endl;
}

//3)
class Perro
{
private:
    string nombre, raza;

public:
    Perro(string, string);
    ~Perro(); //Destructor
    void mostrarDatos();
};
//Constructor
Perro::Perro(string n, string r)
{
    nombre = n;
    raza = r;
}
//Destructor
Perro::~Perro(){};
void Perro ::mostrarDatos()
{
    cout << "Nombre: " << nombre << endl;
    cout << "Raza: " << raza << endl;
}

//4)
class Punto
{
private:
    int x, y;

public:
    Punto();
    void setPunto(int, int);
    int getPuntoX();
    int getPuntoY();
};

Punto::Punto()
{
}
void Punto::setPunto(int x, int y)
{
    this->x = x;
    this->y = y;
}
int Punto::getPuntoX()
{
    return x;
}
int Punto::getPuntoY()
{
    return y;
}

//5)
class Alumno : public Persona
{
private:
    string codigoAlumno;
    double notaFinal;

public:
    Alumno(int, string, string, double);
    void mostrarAlumno();
    void mostrar(); //Polimorfismo
};

Alumno::Alumno(int e, string nom, string cod, double n) : Persona(e, nom)
{
    codigoAlumno = cod;
    notaFinal = n;
}
void Alumno::mostrarAlumno()
{
    mostrarPersona();
    cout << "Codigo alumno: " << codigoAlumno << endl;
    cout << "Nota final: " << notaFinal << endl;
}
void Alumno::mostrar()
{
    Persona::mostrar();
    cout << "Codigo alumno: " << codigoAlumno << endl;
    cout << "Nota final: " << notaFinal << endl;
}

//6) Añadidas en Persona y Alumno

int main()
{
    //1) Clases y objetos
    Persona p1 = Persona(20, "Winsor");
    Persona p2(19, "Maria");
    p1.leer();
    p2.correr();
    cout << endl;

    //2) Sobrecarga de constructores
    Fecha f1(30, 01, 2002);
    Fecha f2(20020617);
    f1.mostrarFecha();
    f2.mostrarFecha();
    cout << endl;

    //3) Destructor de objetos
    Perro perro1("Firulais", "Pitbull");
    perro1.mostrarDatos();
    perro1.~Perro(); //Destruyendo el objeto
    cout << endl;

    //4) Métodos constructores y modificadores (Getters y Setters)
    Punto punto1;
    punto1.setPunto(10, 20);
    cout << "La coordenada x es: " << punto1.getPuntoX() << endl;
    cout << "La coordenada y es: " << punto1.getPuntoY() << endl;
    cout << endl;

    //5) Herencia
    Alumno al1(19, "Winsor", "202108302", 100);
    al1.mostrarAlumno();
    cout << endl;
    
    //6) Polimorfismo
    Alumno al2(22, "Jose", "201920023", 100);
    al2.mostrar();
}