//Programa que lee dos enteros y determina si son multiplos.

#include <stdio.h>

int main(){

	int numero1, numero2, mayor , menor;

	printf( "Introduzca los enteros separados por espacios:\n" );
	scanf( "%d%d", &numero1, &numero2 );

	if( numero1 > numero2 ){
		mayor = numero1;
		menor = numero2;
	}

	if( numero2 > numero1 ){
		mayor = numero2;
		menor = numero1;
	}

	if( mayor % menor == 0 ){

		printf( "Los numeros %d y %d son multiplos\n", numero1, numero2 );
	}

	if( mayor % menor != 0){

		printf( "Los numeros %d y %d no son multipls\n", numero1, numero2 );
	}

	return 0;
}