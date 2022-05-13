/* 
-   Universidad de las Fuerzas Armadas "ESPE"

Programa que permite realizar la conversion de 
un dato tipo String a Entero a Real y Char

Autores: Jilson Narvaez; Diego Hidalgo
Creacion: 11/05/2022
Modificacion:
Grupo # 
GitHub : https://github.com/janarvaez11/CodigosED4683       : 
Version: 1.0

Estructura de Datos 4683

*/

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>

char ingresarDatos(char);

char *ingresarDatos(char *msg){
	char dato[10];
	char cadena[10];
	char c;
	int i=0;
	int j=0;
	int valor;
	int sw=0;
	printf("%s\n", msg);
	try{
		while((c=getche())!=13){
			cadena[j++]=c;
			if(c=='.'){
				sw++;
				if(sw== 2){
					throw "\n==== Decimal Incorrecto, se convertira a char, siga escribiendo la cadena ====\n";
				}
				//printf("%c",c);
				dato[i++]=c;
			}
			if(c>='0' && c<='9'){
				//printf("%c",c);
				dato[i++]=c;
			}
		}
		return dato;
		dato[i]='\0';
	}catch(const char* error){
		printf("%s", error);
	}
	
	//valor = atoi(dato);
	
	//printf("\nEl dato ingresado es: %s\n", dato);
	while((c=getche())!=13){
		cadena[j++]=c;
	}
	printf("\n La cadena es: %s", cadena);
	dato[i]='\0';
	return 0;
	system("pause");
}

int main(int argc, char** argv) {
	char dato[10];
	int valor;
	float valor2;
	//printf("%s", ingresarDatos("Ingrese un valor numerico:\n"));
	strcpy(dato, ingresarDatos("Ingrese un valor numerico:\n"));
	valor = atoi(dato);
	valor2 = atof(dato);
	printf("\n El valor entero ingresado es: %i", valor);
	//float valor = atof(dato[i++]=c);
	printf("\n El valor flotante es: %.2f", valor2);
	
	getch();
	return 0;
}