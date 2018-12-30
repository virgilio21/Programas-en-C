/*3.32 (Otro problema de asociación de else.) Modifique el siguiente código para producir 
la salida que aparece a conti- nuación. Utilice las técnicas de sangrado apropiadas.
No debe hacer cambio alguno que no sea el de insertar llaves. El compilador ignora 
el sangrado de un programa. Eliminamos el sangrado del siguiente código para hacer más 
interesante el problema. [Nota: Es posible 
que no sea necesario hacer modificaciones.]*/
#include <stdio.h>

int main(){
int x = 5;
int y = 7;
 if ( y == 8 ){
 if ( x == 5 ) printf( "@@@@@\n" ); 
}

 else {

 printf( "#####\n" ); 
 printf( "$$$$$\n" ); 
 printf( "&&&&&\n" );
}
 return 0;
}
	