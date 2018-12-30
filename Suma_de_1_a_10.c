#include <stdio.h>

int main(){

	int suma = 0;
	int contador = 1;

	while( contador <= 10 ){

		suma += contador;
		contador++;
	}
    
    printf( "La suma es:%d\n", suma );
	return 0;
}