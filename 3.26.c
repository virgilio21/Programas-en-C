//3.26 Escriba un programa que utilice ciclos para producir la siguiente tabla de valores

#include <stdio.h>

int main(){

	int a = 3;

    printf( "A\t A+2\t A+4\t A+6\n" );
	while( a <=15 ){

		printf( "%d\t %d\t %d\t %d\n", a, a+2, a+4, a+6 );

		a += 2;


	}

return 0; 
}