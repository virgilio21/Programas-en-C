/*3.25-Escriba un programa que utilice ciclos para imprimir la siguiente tabla de valores.

La secuencia de escape tabulador, \t, puede utilizarse en la instrucción printf para separar las columnas con ta-
buladores.*/

#include <stdio.h>

int main(){

int n = 1;


printf( "N \t 10*N\t 100*N\t 1000*N\n" );
while( n <= 10 ){

	printf( "%d\t %d\t %d\t %d\t\n", n, 10*n, 100*n, 1000*n );
	n++;

}

return 0;

}