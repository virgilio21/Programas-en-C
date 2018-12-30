/*Escriba un programa que lea tres valores de tipo float diferentes de cero y 
que determine (y despliegue) si éstos
pueden representar los lados de un triángulo recto.*/

#include <stdio.h>

int main(){

	float cateto1, cateto2, hipotenusa;

	printf( "Ingrese el tamaño del primer cateto:\n" );
	scanf( "%f", &cateto1 );
	printf( "Ingrese el tamaño del segundo cateto:\n" );
	scanf( "%f", &cateto2 );
	printf( "Ingrese el tamaño de la hipotenusa:\n" );
	scanf( "%f", &hipotenusa );

	if( cateto1 != 0 && cateto2 != 0 && hipotenusa != 0 ){



	if( ( hipotenusa * hipotenusa ) == (cateto1 * cateto1) + (cateto2 * cateto2 ) ){

		printf( "Los datos ingresados pueden representar los lados de un triangulo.\n" );
	}

	else{
		printf( "Los datos ingresados no pueden representar los lado de un triangulo.\n" );
	}

	}

	else{

		printf( "Los datos ingresados no pueden ser ceros.\n" );
	}

	return 0;

}