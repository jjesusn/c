/*
Programa: Problema 1
Utilidad: Comprobar si un equipo cumple con los requisitos minimos de Ubuntu
Programador: Jesus Navarro
Fecha: 14 de Marzo del 2015
Version: 1.0
Changelog:
-n/d
*/
#include <stdio.h>

int main() {
//Variables
	int procesador,ram,hdd;
	char nombre[20];
//Saludo
	printf("¿Cual es tu nombre?: ");
	scanf("%s",nombre);
	printf("Bienvenido %s,comprobemos que tu PC soporta Ubuntu \n",nombre);
//Obtencion de datos
	printf("¿A cuantos MHz corre tu procesador?: ");
	scanf("%i",&procesador);
	printf("¿Cuantos Mb de memoria RAM tienes instalado en tu equipo?: ");
	scanf("%d",&ram);
	printf("¿Cuantos Gb libres de disco duro tienes?: ");
	scanf("%d",&hdd);
//Comprobacion
	if((procesador >= 700) && (ram >= 512) && (hdd >= 5)){
		printf("Tu PC cumple con los requisitos minimos");
	}else {
		printf("Tu equipo no cumple con los requisitos minimos para ejecutar Ubuntu");
	}
}