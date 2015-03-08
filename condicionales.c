/*
Programa: Condicionales
Utilidad: Compara dos numeros y verifica cual es el mayor
Programador: Jesus Navarro
Fecha: 8 de Marzo del 2015
Version: 1.1
Changelog:
-Se comento el codigo
*/
//Librerias
#include <stdio.h>

int main() {
	int a,b; //Declaracion de variables
//Obtencion de datos
	printf("Numero 1: ");
	scanf("%d",&a);  
	printf("Numero 2: ");
	scanf("%d", &b);
//Metodo para comparar datos
	if (a>b) {
		printf("El Numero %d es mayor al numero %d",a,b);
	} else {
		printf("El numero %d es mayor al numero %d",b,a);
	}
	return 0;	
}