/*Escriba un programa que despliegue los múltiplos del número entero 2, a saber 
2, 4, 8, 16, 32, 64, y así sucesiva- mente. Su ciclo no debe terminar 
(es decir, debe crear un ciclo infinito). 
¿Qué sucede cuando ejecuta este programa?*/
#include <stdio.h>

int main(){

	int condicion = 0;
	int acumulador = 1;

	while( condicion >= 0){


		acumulador *= 2;

		printf( " %d\n", acumulador );


	}

	return 0;

}