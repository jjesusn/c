/*
Programa: Problema 5
Utilidad: Obtener el area de un circulo
Programador: Jesus Navarro
Fecha: 14 de Marzo del 2015
Version: 1.0
Changelog:
-n/d
*/
#include <stdio.h>

int main() {
//Variables y constantes
	int r=5;
	#define PI 3.141592
//Metodo
	float resultado = PI*(r*r);
//Resultado
	printf("El area de un circulo cuyo radio es de 5 cm es %f cm2",resultado);
}