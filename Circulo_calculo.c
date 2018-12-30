// Calculo de area y perimetro de un circulo.

#include <stdio.h>

int main(){

	int radio;
	float pi = 3.14159;
	float area, perimetro;

	printf( "Introduzca el radio del circulo en cm:\n" );
	scanf( "%d", &radio );

	area = pi * ( radio * radio );
	perimetro = 2 * pi * radio;

	printf( "La circunferencia es %f cm \n", perimetro );
	printf( "El area es %f cm\n", area );

	return 0;

}