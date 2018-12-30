/*Escriba un programa que lea un número entero de 5 digitos y que
 determine y despliegue cuántos dígitos del entero son sietes.*/

#include <stdio.h>

int main(){

	int a, b, c, d, e, numero;
	int contador = 0;

	printf( "Escribe el numero entero  de 5 digitos:\n" );
	scanf( "%d", &numero);

	a = numero/10000;
	b = (numero%10000)/1000;
	c = ((numero%10000)%1000)/100;
	d = (((numero%10000)%1000)%100)/10;
	e = ((((numero%10000)%1000)%100)%10);

	if( a == 7 ){

		contador++;

	}

	if( b == 7 ){

		contador++;
	}

	if( c == 7 ){

		contador++;
	}

	if( d == 7 ){

		contador++;
	}

	if( e == 7 ){

		contador++;
	}

	printf( "Numero de digitos que son 7:%d \n" , contador);

	return 0;


}