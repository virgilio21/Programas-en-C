
/* Mediante un método similar al del ejercicio 3.24, 
encuentre los dos valores más grandes de los 10 números. 
[Nota: Debe introducir un número a la vez.] */

#include <stdio.h>

int main(){

	int contador = 1;
	int numero; 
	int numero_mayor = 0;
	int numero_aun_mas_mayor = 0;


	while( contador <= 10){

		printf( "Introduce un numero(posicion %d):\n",contador );
		scanf( "%d", &numero );

		if ( numero > numero_aun_mas_mayor){
            
            numero_mayor = numero_aun_mas_mayor;
			numero_aun_mas_mayor = numero;
			
		}

		contador++;
	}

	printf( "Los dos numeros más grandes son: %d y %d\n", numero_mayor, numero_aun_mas_mayor );

	return 0;
}



