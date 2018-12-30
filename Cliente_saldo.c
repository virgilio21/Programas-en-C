//determine si un cliente de una tienda departamental excede el límite de crédito de su cuenta.

#include <stdio.h>

int main(){

	int numero_cuenta;
	float saldo_inicial, total_cargos, creditos, limite_creditos;

	printf( "Introduzca el numero de cuenta:(-1 para terminar):\n" );
	scanf( "%d", &numero_cuenta );

	while(numero_cuenta != -1){

		printf( "Introduzca el saldo inicial: \n" );
		scanf( "%f", &saldo_inicial );

		printf( "Introduzca el total de cargos:\n" );
		scanf( "%f", &total_cargos );

		printf( "Introduzca el total de creditos:\n" );
		scanf( "%f", &creditos );

		printf( "Introduzca el limite de creditos:\n" );
		scanf( "%f", &limite_creditos );

		if( saldo_inicial + total_cargos - creditos > limite_creditos ){

			printf( "Numero de cuenta: %d\n", numero_cuenta );
			printf( "Limite de credito: %f\n", limite_creditos );
			printf( "Saldo: %f\n", saldo_inicial + total_cargos - creditos );
			printf( "Limite de credito excedido\n" );
		}

		printf( "Introduzca el numero de cuenta: (-1 para terminar):\n" );
		scanf( "%d", &numero_cuenta );

	}

	return 0;
}