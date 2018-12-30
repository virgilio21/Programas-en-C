#include <stdio.h>

int main(){

	int cuenta;
	int suma = 0;

	for( cuenta = 1; cuenta <= 99; cuenta++ ){

		if( cuenta % 2 != 0){

			suma += cuenta;

		}
		
	}

	printf( "La suma de impares es: %d\n", suma );


	return 0;
}