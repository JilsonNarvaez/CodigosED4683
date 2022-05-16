/* 
-   Universidad de las Fuerzas Armadas "ESPE"

Programa que permite realizar la sobrecarga del operador de asignacion "="

Autores: Jilson Narvaez; Diego Hidalgo; Angelo Olmedo
Creacion: 13/05/2022
Modificacion:
Grupo 15
GitHub : https://github.com/janarvaez11/CodigosED4683       : 
Version: 1.0

Estructura de Datos 4683

*/


#include <iostream>
#include <string>
#include <utility>
#include <vector>

using std::cout; using std::endl;
using std::vector; using std::string;

class Persona {
public:
    Persona() {
        nombre = new string;
        apellido = new string;
    };
    Persona(string n, string s) {
        nombre = new string(std::move(n));
        apellido = new string(std::move(s));
    }
    Persona(Persona &p) {
        nombre = new string(*p.nombre);
        apellido = new string(*p.apellido);
    }

    ~Persona() {
        delete nombre;
        delete apellido;
    }

    void renombrarPersona(const string &n, const string &s) {
        nombre->assign(n);
        apellido->assign(s);
    };

    void mostrarPersona() {
        cout << *nombre << " " << *apellido;
    }

private:
    string *nombre;
    string *apellido;
};

int main() {
    Persona P1("Angelo", "Olmedo");
    Persona P2 = P1;

    P1.mostrarPersona();
    cout << endl;
    P2.mostrarPersona();
    cout << endl;

    P1.renombrarPersona("Ariel", "Narvaez");

    P1.mostrarPersona();
    cout << endl;
    P2.mostrarPersona();
    cout << endl;

    Persona P3;
    P3 = P1;
    P1.mostrarPersona();
    cout << endl;
    P3.mostrarPersona();
    cout << endl;

    P1.renombrarPersona("Diego", "Hidalgo");

    P1.mostrarPersona();
    cout << endl;
    P3.mostrarPersona();
    cout << endl;

  exit(EXIT_SUCCESS);
}