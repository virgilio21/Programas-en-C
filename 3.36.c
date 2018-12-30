//conversion de decimal a binario de cuatro digitos.
#include <stdio.h>

int main(){

	int numero, a, b, c, d, decimal;

	printf( "Introduce el numero binario: \n" );
	scanf( "%d", &numero );
    
    a = (numero%10000)/1000;
	b = ((numero%10000)%1000)/100;
	c = (((numero%10000)%1000)%100)/10;
	d = ((((numero%10000)%1000)%100)%10);

	a = a * 8;
	b = b * 4;
	c = c * 2;
	d = d * 1;

	decimal = a + b + c + d;

	printf( "El numeo decimal es:%d\n", decimal );


	return 0;

}