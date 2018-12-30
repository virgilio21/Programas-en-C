
// Progrma que calcula el promedio de un grupo de alumnos con ayuda de un centinela.
#include <stdio.h>

int main(){
	int cali;
	int suma = 0;
	int contador = 0;
	float promedio;

	printf( "Introduzaca la calificacion, -1 para terminar:\n" );
	scanf( "%d", &cali );

	while( cali != -1 ){
		suma = suma + cali;
		contador = contador + 1;

		printf( "Introduzaca la calificacion, -1 para terminar:\n" );
		scanf( "%d", &cali );


	}

	if( contador != 0 ){

		promedio = (float) suma / contador;
		printf( "El promedio del grupo es: %.2f\n", promedio );
	}

	else{
		printf( "No se introducieron calificaciones.\n" );
	}


	return 0;
}