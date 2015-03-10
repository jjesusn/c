/*
Programa: Promedios
Utilidad: Programa para calcular promedio de un alumno
Programador: Jesus Navarro
Fecha: 9 de Marzo del 2015
Version: 1.0
Changelog:
-n/d
*/

#include <stdio.h>
char nombre[15],apellidoM[15],apellidoP[15]; //Se declaran las variables que almacenan texto
float p1,t1,e1,p2,t2,e2,p3,t3,e3,r1,r2,r3,rf;

int main() {
//Obtencion de datos
	printf("Introduce tu nombre: ");
	scanf("%s",nombre);
	printf("Introduce tu apellido paterno: ");
	scanf("%s",apellidoP);
	printf("Introduce tu apellido materno: ");
	scanf("%s",apellidoM);
//Obtencion de calificaciones
printf("Ahora introduciras tus calificaciones %s \n",nombre);
//Primer parcial
printf("Primer parcial... \n");
printf("Practicas: ");
scanf("%f",&p1);
printf("Tareas: ");
scanf("%f",&t1);
printf("Examen: ");
scanf("%f",&e1);
//Segundo parcial
printf("Segundo parcial... \n");
printf("Practicas: ");
scanf("%f",&p2);
printf("Tareas: ");
scanf("%f",&t2);
printf("Examen: ");
scanf("%f",&e2);
//Tercer parcial
printf("Tercer parcial... \n");
printf("Practicas: ");
scanf("%f",&p3);
printf("Tareas: ");
scanf("%f",&t3);
printf("Examen: ");
scanf("%f",&e3);
//Resultados
r1 = (p1+t1+e1)/3;
r2 = (p2+t2+e2)/3;
r3 = (p3+t3+e3)/3;
rf = (r1+r2+r3)/3;
printf("El primer parcial obtuviste: %f \n",r1);
printf("El segundo parcial obtuviste: %f \n",r2);
printf("El tercer parcial obtuviste: %f \n",r3);
printf("Entonces obtuviste un total de: %f \n",rf);
if(rf >= 70){
	printf("Felicidades estas aprobado");
}else{
	printf("JAJAJAJAJAJAJAJAJA reprobaste");
}
}