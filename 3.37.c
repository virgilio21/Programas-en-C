/*¿Cómo puede determinar la rapidez real con la que opera su propia computadora? 
Escriba un programa mediante un ciclo while que cuente de 1 a 300,000,000 por unos. Cada vez 
que la cuenta alcance un múltiplo de 100,000,000 despliegue dicho número en la pantalla. 
Utilice su reloj para determinar cuánto tarda cada millón de repeticiones del ciclo.*/

#include <stdio.h>

int main(){

	int contador = 1;

	while( contador <= 300000000 ){

		if( contador % 100000000 == 0){

			printf( "%d\n", contador );
		}


		contador++;
	}

	return 0;
}