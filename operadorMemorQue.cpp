/* 
-   Universidad de las Fuerzas Armadas "ESPE"

Programa que permite realizar la sobrecarga del operador binario "Menor que" "<"

Autores: Jilson Narvaez; Diego Hidalgo; Angelo Olmedo
Creacion: 13/05/2022
Modificacion:
Grupo: 15
GitHub : https://github.com/janarvaez11/CodigosED4683       : 
Version: 1.0

Estructura de Datos 4683

*/



#include <iostream>
using namespace std;

class Vector {
  public: int x, y;
  bool operator== (Vector v) {   // sobrecarga operador ==
    return ((v.x == x) && (v.y == y))? true: false;
  }
  bool operator> (Vector v) {    // sobrecarga operador >
    return ((x > v.x) || (y > v.y))? true: false;
  }
  bool operator< (Vector v) {    // sobrecarga operador <
    return ((x < v.x) || (y < v.y))? true: false;
  }
};

int main() { 

  Vector v1 = {2, 1}, v2 = {3, 0};

  if ( v1 == v2 ) cout << "Iguales" << endl;
  else            cout << "Distintos" << endl;
  if ( v1 > v2 )  cout << "v1 mayor que v2" << endl;
  if ( v1 < v2 )  cout << "v1 menor que v2" << endl;
}