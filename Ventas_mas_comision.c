//Una gran empresa de productos químicos le paga a sus vendedores 
//mediante un esquema de comisiones. Los vendedores reciben $200 semanales 
//más el 9% de sus ventas totales durante la semana. Por ejemplo, un vendedor que vende $5000 
//de productos químicos durante la semana recibe $200 más el 9% de $5000, o un total de $650. 
//Desarrolle un programa que introduzca las ventas totales de cada vendedor durante la última semana 
//y que calcule y despliegue los ingresos de ese vendedor. 

#include <stdio.h>

int main(){
	float ventas_pesos, comision, total_a_pagar;
	int sueldo_semanal = 200;
	comision = .09;

	printf( "Introduzca las ventas en pesos(-1 para terminar):\n" );
	scanf( "%f", &ventas_pesos );

	while( ventas_pesos != -1 ){

		total_a_pagar = sueldo_semanal + ( ventas_pesos * comision );
		printf( "El salario es: $%.2f\n", total_a_pagar );

		printf( "Introduzca las ventas en pesos(-1 para terminar):\n" );
	    scanf( "%f", &ventas_pesos );

	}

	return 0;
}