/*
Programa: Problema 4
Utilidad: Determinar si un numero es par o impar
Programador: Jesus Navarro
Fecha: 14 de Marzo del 2015
Version: 1.0
Changelog:
-n/d
*/
#include <stdio.h>

int main() {
//Variable
	int n;
//Obtener datos
	printf("Introduce un numero: ");
	scanf("%i",&n);
//Metodo
	if (n%2==0) {
		printf("Es numero par");
	}else{
		printf("Es numero impar");
	}
}