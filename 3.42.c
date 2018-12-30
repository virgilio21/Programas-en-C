/*Escriba un programa que lea el radio de un círculo (como un valor float) 
y que calcule y despliegue el diámetro, la circunferencia y el área. Utilice el valor 3.14159 para π.*/

#include <stdio.h>

int main(){

	float radio, diametro, circunferencia, area;

	printf( "Escriba el radio del criculo:\n" );
	scanf( "%f", &radio );

	area = (radio * radio) * 3.14159;
	diametro = 2 * radio;
	circunferencia = 2 * 3.14159 * radio;


	printf( "El area es: %.2f cm\n", area );
	printf( "El diametro es : %.2f cm\n", diametro );
	printf( "La circunferencia es: %.2f cm\n", circunferencia );

	return 0;
}