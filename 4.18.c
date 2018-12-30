#include <stdio.h>

int main(){

	int i;
	int a, b, c, d, e;

	printf( " Introduzca 5 numero(enteros) separados por espacios: \n" );
	scanf( "%d%d%d%d%d", &a, &b, &c, &d, &e );

	for( i = 1; i <= a; i++ ){

		printf( "*" );
	}

	printf("\n");

	for( i = 1; i <= b; i++ ){

		printf( "*" );
	}

	printf("\n");

	for( i = 1; i <= c; i++ ){

		printf( "*" );
	}

	printf( "\n" );

	for( i = 1; i <= d; i++ ){

		printf( "*" );
	}

	printf( "\n" );

	for( i = 1; i <= e; i++ ){

		printf( "*" );
	}

	printf("\n");

	return 0;
}