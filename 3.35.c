/*Un palíndromo es un número o una frase de texto que se 
lee igual hacia delante y hacia atrás. Por ejemplo, cada uno de los siguientes números de cinco dígitos, 
son palíndromos: 12321, 55555, 45554, y 11611. Escriba un 
programa que lea números de cinco dígitos y que determine si es o no, un palíndromo. 
[Pista: Utilice los operadores de división y residuo para separar el número en sus dígitos individuales.]*/

#include <stdio.h>

int main(){

	int numero;
	int a, b, c, d, e;

	printf( "Introduce un numero de 5 digitos:\n" );
	scanf("%d", &numero);

	if(numero > 9999 && numero <= 99999){



	a = numero/10000;
	b = (numero%10000)/1000;
	c = ((numero%10000)%1000)/100;
	d = (((numero%10000)%1000)%100)/10;
	e = ((((numero%10000)%1000)%100)%10);

	if(a == e && b == d){
		printf( "El numero es palíndromo\n" );
	}

	else{
		printf("El numero no es palíndromo\n");
	}


	printf("%d, %d, %d, %d, %d\n", a, b, c, d, e );


    }

	return 0;




}