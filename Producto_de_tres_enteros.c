// Calculo del producto de tres enteros.
#include <stdio.h>

int main(){
	int x, y, z, resultado;

	printf( "Introduzca tres numeros separados por espacios:\n" );
	scanf( "%d%d%d" , &x, &y, &z );

	resultado = x * y * z;

	printf( "El resultado es: %d\n", resultado );

	return 0;

}