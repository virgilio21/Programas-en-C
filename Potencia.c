#include <stdio.h>

int main(){
	int x, y;
    int potencia = 1;
    int i = 1;

    printf( "Introduce la base:\n" );
    scanf( "%d", &x );

    printf( "Introduce el exponente\n" );
    scanf( "%d", &y);

    while( i <= y ){

    	potencia *= x;

    	i++;
    }

    printf("El resultado es:%d\n", potencia);

    return 0;
}