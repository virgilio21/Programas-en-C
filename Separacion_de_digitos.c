//Programa que lee un numero de 5 digitos y los separa en sus digitos individuales.

#include <stdio.h>

int main(){

	int numero;


	printf( "Introduzca un numero de 5 digitos y sera separado en sus digitos individuales\n" );

	scanf( "%d", &numero );

	printf( " %d ", numero/10000 );
	printf( " %d ", (numero%10000)/1000 );
	printf( " %d ", ((numero%10000)%1000)/100 );
	printf( " %d ", (((numero%10000)%1000)%100)/10 );
	printf( " %d \n", ((((numero%10000)%1000)%100)%10) );

	return 0;

}