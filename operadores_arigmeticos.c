/*
Programa: Operadores 
Utilidad: Lee dos numeros y realiza operaciones 
Programador: Jesus Navarro
Fecha: 4 de Marzo del 2015
Version: 1.1
Changelog:
-Se ahorran 4 lineas de codigo
*/

//Librerias
#include <stdio.h>
//Funcion
main(){
//Declaracion de variables
	int numero1,numero2,suma;
	float resta,multiplicacion,division,resto;
//Obtencion de datos	
	printf("Bienvenidos a mi programa \n");
	printf("Por favor introduce un numero: ");
	scanf("%d", &numero1);
	printf("Introduce otro numero: ");
	scanf("%d", &numero2);
//Metodos 
	suma = numero1 + numero2;
	resta = numero1 - numero2;
	multiplicacion = numero1 * numero2;
	division = numero1 / numero2;
	resto = numero1%numero2;
//Impresion de resultados
	printf("El resultado de la suma es: &d \n",&suma);
	printf("El resultado de la resta es: &d \n",&resta);
	printf("El resultado de la multiplicacion es: &d \n", &multiplicacion);
	printf("El resultado de la division es: &d \n", &division);
	printf("El resultado de el resto es: &d \n",&resto);
	printf("Gracias por participar \n");
}