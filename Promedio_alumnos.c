// programa que calcula el promedio de un grupo de 10 alumnos.

#include <stdio.h>

int main(){

	int promedio, cali_alumno;
	int suma = 0;
	int contador = 1;

	while ( contador <= 10 ){

		printf( "Introduce una calificacion: \n" );
		scanf( "%d", &cali_alumno );

		suma = suma + cali_alumno;

		contador = contador + 1;


	}

	promedio = suma / 10;

	printf("El promedio de la clase es: %d\n", promedio);

	return 0;
}