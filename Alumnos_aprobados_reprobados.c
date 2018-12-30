// Programa para saber cuantos alumnos reprobaron y aprobaron, 1 = aprobado y 2 = reprobado.
#include <stdio.h>

int main(){

	int contador_aprobados = 0;
	int contador_reprobados = 0;
	int contador_alumnos = 1;
	int calificacion;


	while( contador_alumnos <= 10){
		printf( "Introduce el resultado (1=aprobado, 2=reprobado):\n" );
		scanf( "%d", &calificacion);

		if (calificacion == 1){
			contador_aprobados = contador_aprobados + 1;
		}

		else{
			contador_reprobados = contador_reprobados + 1;
		}

		contador_alumnos = contador_alumnos + 1;
	}

	printf( "Alumnos reprobados: %d\n", contador_reprobados );
	printf( "Alumnos aprobados : %d\n", contador_aprobados );

	if(contador_aprobados > 8){
		printf( "¡Se cumplio el objetivo!.\n" );
	}

	return 0;
}