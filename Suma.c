#include <stdio.h>

int entero1, entero2, suma;


int main(){

	printf("Introduzca el primer entero\n");
	scanf("%d",&entero1);

	printf("Introduzca el segundo entero\n");
	scanf("%d",&entero2);

	suma = entero1 + entero2;

	printf("El resultado de la suma es: %d\n",suma);

	return 0;
}