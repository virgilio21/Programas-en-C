// Programa que hace la suma, promedio, producto y busca el numero más pequeño y el mas grande
// de tres enteros.

#include <stdio.h>

int main(){

	int numero1, numero2, suma, promedio, producto;

	printf( "Introduzca el primer valor:\n" );
	scanf( "%d", &numero1 );

	printf( "Introduzca el segundo valor:\n" );
	scanf( "%d", &numero2 );

	suma = numero1 + numero2;
	promedio = ( numero1 + numero2 ) / 2;
	producto = numero1 * numero2;

	printf( "La suma es %d\n", suma );
	printf( "El promedio es %d\n", promedio );
	printf( "El producto es %d\n", producto );


	if ( numero1 < numero2 ){
		printf( "El numero más pequeño es %d\n" , numero1 );
		printf( "El numero más grande es %d\n" , numero2 );
	}

	if( numero2 < numero1 ){
		printf( "El numero más pequeño es %d\n", numero2 );
		printf( "El numero más grande es %d\n", numero1 );
	}

	return 0;


}