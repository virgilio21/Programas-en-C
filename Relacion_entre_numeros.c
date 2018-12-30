#include <stdio.h>

int main(){
	int numero1, numero2;

	printf("Escriba dos enteros y le dire\n");
	printf("las relaciones que satisfacen:");

	scanf( "%d%d", &numero1, &numero2 );

	if( numero1 == numero2 ){
		printf( "%d es igual que %d\n", numero1, numero2 );
	}

	if( numero1 != numero2){
		printf( "%d es diferente de %d\n", numero1, numero2 );
	}

	if( numero1 < numero2){
		printf( "%d es menor que %d\n", numero1, numero2 );
	}

	if( numero1 > numero2){
		printf( "%d es mayor que %d\n", numero1, numero2 );
	}

	if( numero1 <= numero2){
		printf( "%d es menor e igual que %d\n", numero1, numero2 );
	}

	if( numero1 >= numero2){
		printf( "%d es mayor e igual que %d\n", numero1, numero2 );
	}

	return 0;

}