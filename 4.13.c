#include <stdio.h>
/*Escriba un programa que calcule e imprima el producto 
de los enteros nones del 1 al 15.*/
int main(){

	int i, suma = 0;

	for( i = 1; i <= 15; i++ ){

		suma += i;
	}

printf( " La suma es: %d\n", suma );
return 0;

}