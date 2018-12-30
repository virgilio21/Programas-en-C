// Programa que calcula el kilometraje despues de cada llenado de tanque y calcula el promedio kilometro
//por litro de todo el viaje.

#include <stdio.h>

int main(){

	float litros, kilometros_litro;
	int kilometros;
	int contador = 0;
	float contador_k_l;
	float promedio_kiloporlitro = 0;

	
    printf( "Introduce los litros utilizados (-1 para terminar):\n" );
    scanf( "%f", &litros );

	while( litros != -1 ){

		printf("Introduce los kilómetros conducidos:\n");
		scanf( "%d", &kilometros );

		kilometros_litro = kilometros / litros;
		contador_k_l += kilometros_litro;
		contador++;

		printf( "Los kilómetros por litro de éste tanque fueron:%.6f\n\n", kilometros_litro );

		printf( "Introduce los litros utilizados (-1 para terminar):\n" );
        scanf( "%f", &litros );
	
	}

	if ( contador != 0){
		promedio_kiloporlitro = contador_k_l / contador;

		printf("El promedio general de kilómetros/litro fue:%.6f \n", promedio_kiloporlitro);
	}

	else{
		printf("Fin de programa.\n");
	}
   return 0;

}