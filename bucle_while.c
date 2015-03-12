#include <stdio.h>

int main() {
	int contador = 1; //Se inicia el contador en 1
	while(contador <=10){ //Se le da la orden que cuente hasta igual o menor que 10
		printf("%d", contador); //Se imprimen los numeros del 1 al 10
		contador++; //Se le dice que vaya de uno en uno
	}
	return 0; //La funcion main() no retorna nada por eso es 0
}