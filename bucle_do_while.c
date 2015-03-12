#include <stdio.h>

int main() {
	int contador = 1; //Se inicia el contador en 1
//El bucle do while primero ejecuta las instrucciones y despues valida la informacion
	do {
				printf("%d", contador);
				contador++;
	} while (contador <= 10);
}