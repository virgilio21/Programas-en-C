#include <stdio.h>

int main(){

	double numero = 333.546372;

	printf( " Resultado: %-15.1f\n ", numero );
	printf( " Resultado: %-15.2f\n ", numero );
	printf( " Resultado: %-15.3f\n ", numero );
	printf( " Resultado: %-15.4f\n ", numero );
	printf( " Resultado: %-15.5f\n ", numero );
	
	return 0;
}