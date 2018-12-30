#include <stdio.h>

int main(){

	int i, idCliente;
	float creditoAntesRecision, saldoQueDebe, nuevoLimite;

	for( i = 1; i <=3; i++ ){

		printf( " ID del cliente: \n" );
		scanf( "%d", &idCliente );

		printf( " Limite del credito antes de la recesión: \n " );
		scanf( "%f", &creditoAntesRecision );

		printf( " Monto que debe el cliente a la empresa: \n " );
		scanf( "%f", &saldoQueDebe );

		nuevoLimite = creditoAntesRecision / 2;

		printf( " ID: %d\n", idCliente );
		printf( " Nuevo limite: %.4f\n", nuevoLimite );

		if( saldoQueDebe > nuevoLimite ){

			printf( " El saldo del empleado excede el limite del nuevo credito.\n\n " );
		}

		else{

			printf( "El saldo del empleado no excede el nuevo limite. \n\n" );
		}


	}

	return 0;
}