#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ( int argc, char ** argv ) {
    if ( argc != 2 ) {
        printf ( "# main develop\n");
        exit ( 0 );
    }

    if ( strcmp ( argv [ 1 ] , "develop" ) == 0 )
        system("open https://repl.it/@AndreHeber/fastdev");

  return 0;
}
