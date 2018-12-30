/*El factorial de un número entero positivo n se escribe n! (que se pronuncia “n factorial”) 
y se define como:
y
n! = n · (n - 1) · (n - 2) · ... · 1 (para valores de n mayores o iguales que 1) n! = 1 (para n = 0)
Por ejemplo, 5! = 5 · 4 · 3 · 2 · 1, que es igual a 120.*/

#include <stdio.h>

int main(){

	int numero;
	int resultado = 1;
	int contador = 1;

	printf( "Introduce un numero entero para obetner su factorial”: \n" );
	scanf( "%d", &numero );

	while( contador <= numero ){

		resultado *= contador;

		contador++;
	}

	printf( "El resultado es: %d\n", resultado );

	return 0;



}