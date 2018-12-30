//Programa para saber si un numero es par o impar.

#include <stdio.h>

int main (){

	int numero, resultado;

	printf( "Introduzca un numero:\n" );
	scanf( "%d", &numero );

	resultado = numero % 2;

	if( resultado == 0 ){
		printf( "%d es par\n", numero );
	}

	if( resultado != 0 ){
		printf( "%d es impar:\n", numero );
	}

	return 0;


}