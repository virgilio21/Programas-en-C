/*3.24-El proceso para encontrar el número más grande (es decir, el máximo de un grupo de números) 
se utiliza con fre- cuencia en aplicaciones para computadora. Por ejemplo, un programa que determina el 
ganador de un concurso de unidades vendidas por cada vendedor. El vendedor que vende el mayor 
número de unidades gana. Escriba un programa en pseudocódigo y posteriormente un programa que 
introduzca una serie de 10 números y determine e im- prima el mayor de éstos. [Clave: Su programa debe
utilizar tres variables de la siguiente manera]:
contador:
numero:
mayor:
Un contador para contar los números de 1 a 10 (es decir, para llevar la cuenta de cuántos números
se han introducido y determinar si ya se procesaron los 10 números).
El número actual que se introduce al programa.
El número más grande encontrado hasta el momento.*/

#include <stdio.h>

int main(){
	int contador = 1;
	int numero, mayor = 0;


	while( contador <= 10){

		printf( "Introduce un numero(posicion %d):\n", contador);
		scanf( "%d", &numero );

		if ( numero > mayor ){

			mayor = numero;
		}

		contador++;
	}

	printf( "El numero mayor es: %d\n", mayor );

	return 0;
}
