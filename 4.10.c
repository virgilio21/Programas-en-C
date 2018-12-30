#include <stdio.h>

/*Escriba un programa que calcule e 
imprima el promedio de varios enteros. Suponga que el último 
valor que lee la instrucción scanf es el centinela 9999. 
Una secuencia de entrada típica podría ser:
10 8 11 7 9 9999.*/

int main(){
	int valor;
	int contador = 1;
	float promedio;
	int suma = 0;

	printf( " Inserte un valor(-1 para terminar):\n " );
	scanf( "%d", &valor );
	while( valor != -1){

		suma += valor;
		printf( "Inserte un valor(-1 para terminar):\n " );
		scanf( "%d", &valor );
		if(valor != -1){

			contador++;
		}
		
	}

promedio = suma / contador;
printf( "El promedio es: %f\n", promedio );


return 0;
}