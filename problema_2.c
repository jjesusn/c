/*
Programa: Problema 2
Utilidad: Determinar el volumen de una figura geometrica
Programador: Jesus Navarro
Fecha: 14 de Marzo del 2015
Version: 1.0
Changelog:
-n/d
*/
#include <stdio.h>
#include <math.h>
//Variables y Constantes
#define PI 3.141592
float a,b,h,r;
char n[15];
int eleccion;
//Funciones
double cubo(float x){
	float resultado = pow(x,3);
	return(resultado);
}
double cilindro(float x,float y){
	float resultado = (pow(x,2)*PI)*y;
	return(resultado);
}
double cono(float x, float y){
	float resultado = ((pow(x,2)*y)*PI)/3;
	return(resultado);
}
double piramide(float x, float y){
	float resultado = ((x*x)*y)/3;
	return(resultado);
}

int main() {
//Saludo
	printf("Bienvenido, ¿Cual es tu nombre?: ");
	scanf("%s",n);
//Obtener datos
	printf("Excelente %s, ahora introduce los siguientes datos. \n",n);
	printf("Arista: ");
	scanf("%f",&a);
	printf("Base: ");
	scanf("%f",&b);
	printf("Altura: ");
	scanf("%f",&h);
	printf("Radio: ");
	scanf("%f",&r);
//El usuario elige la figura
	printf("Muy bien %s, ahora elige una de las siguientes figuras: \n",n);
	printf("1.- Cubo \n");
	printf("2.- Cilindro \n");
	printf("3.- Cono \n");
	printf("4.- Piramide \n");
	scanf("%i",&eleccion);
//Casos
	switch (eleccion) {
		case 1:
			printf("El volume de un cubo cuya arista es de %f es: %f \n",a,cubo(a));
			break;
		case 2:
			printf("El volume de un cilindro cuyo radio es %f y altura de %f es: %f \n",r,h,cilindro(r,h));
			break;
		case 3:
			printf("El volume de un cono cuyo radio es %f y altura de %f es: %f \n",r,h,cono(r,h));
		break;
		case 4:
			printf("El volumen de una piramide cuya arista es de %f y una altura de %f es: %f \n",a,h,piramide(a,h));
		break;
		default:
		printf("Elije una opcion valida...\n");
		break;
	}
	printf("Gracias %s por participar :D",n);
}