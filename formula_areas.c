/*
Programa: Calculo de areas
Utilidad: Se calcula el area de 4 figuras geometricas
Programador: Jesus Navarro
Fecha: 9 de Marzo del 2015
Version: 1.0
Changelog:
-n/d
*/

//Librerias
#include <stdio.h>
//Constantes y variables
#define PI 3.141592
char nombre[20]; //Tipo de variable que admite cadena de texto
float b,h,r; //Se pueden declarar varias variables en una linea
int figura;

//Funciones
double cuadrado(float x){
	float resultado = x*x; //pow() Sirve para calcular potencia
	return(resultado);
}
double rectangulo(float x, float y){
	float resultado = x*y;
	return(resultado);
}
double circulo(float x){
	float resultado =(x*x)*PI;
	return(resultado); 
}
double triangulo(float x,float y){
	float resultado = (x*y)/2;
	return(resultado);
}
int main() {
//Saludo al usuario
	printf("Hola, introduce tu nombre: ");
	scanf("%s",nombre);
//Obtencion de datos
	printf("Bien hecho %s ahora introduce algunos datos... \n",nombre);
	printf("Por favor introduce una base: ");
	scanf("%f", &b);
	printf("Ahora una altura: ");
	scanf("%f", &h);
	printf("Y por ultimo un radio: ");
	scanf("%f", &r);
//Se selecciona la figura de la cual se desea obtener el area
	printf("Bien hecho, ahora escoge una de las figuras geometricas: \n");
	printf("1: Cuadrado \n");
	printf("2: Rectangulo \n");
	printf("3: Circulo \n");
	printf("4: Triangulo \n");
	scanf("%d", &figura);
//Dependiendo del numero que introduzca el usuario es la opcion que se le presenta
	switch (figura) {  
		case 1:
					printf("Haz seleccionado el cuadrado y su area es: %f",cuadrado(b));
					break;
		case 2:
					printf("Haz seleccionado el rectangulo y su area es: %f",rectangulo(b,h));
					break;
		case 3:
					printf("Haz seleccionado el circulo y su area es: %f",circulo(r));
					break;
		case 4:
					printf("Haz seleccionado el triangulo y su area es: %f",triangulo(b,h));
					break;
		default:
					printf("Introduzca un numero valido...");
			break;
	}
}