
/*Escriba un programa que encuentre el menor de varios enteros. 
Suponga que el primer valor a leer especifica el número de valores restantes.*/
#include <stdio.h>

int main(){

	int valor, ultimo_menor, nuevovalor, i, auxiliar, menor;

	printf( " Inserte el primer digito:\n" );
	scanf( "%d", &valor );

	for( i = 1; i <= valor; i++ ){

		if( i == 1 ){
			ultimo_menor = valor;
		}

	printf( " Inserte un nuevo valor:\n" );
	scanf( "%d", &nuevovalor );

	if( nuevovalor < ultimo_menor ){

		menor = nuevovalor;
		ultimo_menor = nuevovalor;
		
	}

	else{

		menor = valor;
	}



	}

	printf( "El numero menor es: %d\n", menor );

	return 0;
}