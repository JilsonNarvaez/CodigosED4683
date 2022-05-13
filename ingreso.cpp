/* 
-   Universidad de las Fuerzas Armadas "ESPE"

Programa que permite realizar la conversion de 
un dato tipo String a Entero

Autores: Jilson Narvaez; Diego Hidalgo
Creacion: 11/05/2022
Modificacion:
Grupo # 
GitHub : https://github.com/janarvaez11/CodigosED4683
Version: 1.0

Estructura de Datos 4683

*/


#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>

char *ingresarDatos(char*);

//Conversion de String a Entero

char *ingresarDatos(char *msg){
	
	char *dato=new char[10];
	char c;
	int i=0;
	//int valor;
	printf("%s\n", msg);
	
	while((c=getch())!=13){		
		if(c>='0'&& c<='9'){			
			
			printf("%c", c);
			dato[i++]=c;
		}
	}
	dato[i]='\0';
	
	/*
	valor = atoi(dato);
	printf("\nEl dato ingresado es %s ", dato);
	system("pause");
	*/
	return dato;
	
	//	
}

 char *ingresarDatos(char *msg){
 	
 	char *dato=new char[10];
	char c;
	int i=0;
	//int valor;
	printf("%s\n", msg);
	
	while((c=getch())!=13){		
		if(c>='0'&& c<='9'){			
			
			printf("%c", c);
			dato[i++]=c;
		}
	}
	dato[i]='\0';
	
	/*
	valor = atoi(dato);
	printf("\nEl dato ingresado es %s ", dato);
	system("pause");
	*/
	return dato;

 	
 }
int main(int argc, char** argv) {
	
	char dato[10];
	int valor;
	strcpy(dato, ingresarDatos("Ingrese el valor numerico entero"));
	
	valor = atoi(dato);
	
	printf("---->%d", valor*2);
	
	return 0;
}