#include <stdio.h>

/*Escriba un programa que calcule e imprima la suma de los enteros pares del 2 al 30*/

int main(){

	int i, suma = 0;

	for( i = 2; i <= 30; i+=2 ){

		suma += i;
	}

printf( " La suma es: %d\n", suma );
return 0;

}