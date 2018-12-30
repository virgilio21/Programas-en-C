#include <stdio.h>

int main(){

	int calificacion;
	int cuentaA = 0;
	int cuentaB = 0;
	int cuentaC = 0;
	int cuentaD = 0;
	int cuentaF = 0;

	while( (calificacion = getchar()) != EOF ){

		switch ( calificacion ){

			case 'A':
			case 'a': cuentaA++;
			break;

			case 'B':
			case 'b': cuentaB++;
			break;

			case 'C':
			case 'c': cuentaC++;
			break;

			case 'D':
			case 'd': cuentaD++;
			break; 

			case 'F':
			case 'f': cuentaF++;
			break;



			default: printf( " Introdujo una letra incorrecta\n " );
			printf( " Introduzca una nueva calificacion\n " );
			break;



		}
	}

	printf( " \nLos totales por calificacion son:\n" );
	printf( " A: %d\n", cuentaA );
	printf( " B: %d\n", cuentaB );
	printf( " C: %d\n", cuentaC );
	printf( " D: %d\n", cuentaD );
	printf( " F: %d\n", cuentaF );

	return 0;

}