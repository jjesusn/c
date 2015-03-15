/*
Programa: Problema 3
Utilidad: Verifica si un numero es positivo o negativo
Programador: Jesus Navarro
Fecha: 14 de Marzo del 2015
Version: 1.0
Changelog:
-n/d
*/
#include <stdio.h>

int main() {
//Variables
float numero;
//Obtencion de datos
	printf("Introduce un numero: ");
	scanf("%f",&numero);
//Metodo
	if(numero <0){
		printf("El numero es negativo");
	}else if (numero >0) {
		printf("El numero es positivo");
	}else {
		printf("El numero es cero");
	}
}