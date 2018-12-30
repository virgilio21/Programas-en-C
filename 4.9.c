#include <stdio.h>

/*Escriba un programa que sume una secuencia de enteros. Asuma que el primer
 entero leído mediante scanf es- pecifica el número de valores restantes 
 que se introducirán. Su programa debe leer únicamente un valor cada vez 
 que se ejecuta scanf. Una secuencia de entrada típica podría ser:

 5 100 200 300 400 500*/

int main(){

	int x, i, valor, suma;

	printf( "Introduzca el numero de valores que quiere ingresar:\n" );
	scanf( "%d", &x );

	for( i = 1; i <= x; i++ ){

		printf( "Introduzca un valor(entero): \n" );
		scanf( "%d", &valor );

		suma += valor;
	}

printf( "La suma de los valores ingresados es: %d\n", suma );

return 0;

}