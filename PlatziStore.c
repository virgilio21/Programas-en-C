#include <stdio.h>
#include <string.h>

int main(){
    
    int numeroTermo;
    int totalTermo;
    char compra[7];
    int repetir;
    
    do{
        printf( "Bienvenido a la tienda\n" );
        printf( "Ecribe termo para comprar uno\n" );
        printf( "Escribe gorra para comprar una\n" );
        printf( "Escribe playera para comprar una\n" );
        printf( "Escribe balon para comprar uno\n" );
        printf("Escribe putas para comprar una XD\n");
        scanf( "%s", compra );

        if( strcmp( compra, "termo" ) == 0 ){
            printf( "Cada termo cuesta 6 pesos, ¿Cuantas quieres?\n" );
            printf( "Cuantas quieres\n" );
            scanf( "%d", &numeroTermo );
            totalTermo += (numeroTermo * 6);
            printf( "Total en termos: %d",totalTermo );
        }
        else if( strcmp( compra, "gorra" ) == 0 ){
            printf( "Cada termo cuesta 9 pesos\n" );
        }
        else if( strcmp( compra, "playera" ) == 0 ){
            printf( "Cada termo cuesta 3 pesos\n" );
        }
        else if( strcmp( compra, "balon" ) == 0 ){
            printf( "Cada termo cuesta 12 pesos\n" );
        }
        else if( strcmp( compra, "putas" ) == 0 ){
            printf( "Cada termo cuesta 80 pesos\n" );
        }
        else{
            printf( "Ese producto no existe en la tienda, intenta de nuevo\n" );
        }
        printf("Gracias por comprar!\n");
        printf( "1. Para seguir comprando\n" );
        printf( "Culquier otro para terminar\n" );
        scanf( "%d", &repetir );
    }while( repetir == 1 );
    
}