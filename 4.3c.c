#include <stdio.h>
#include <math.h>

int main(){

	float n = 2.5;
	float resultado;

	resultado = pow( n, 3 );

	printf( " %10.2f\n ", resultado );
	printf( " %f\n ", resultado );

	return 0;

}