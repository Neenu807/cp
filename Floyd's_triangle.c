/* DISPLAY FLOYD'S TRIANGLE
 *       1
 *       2 3
 *       4 5 6
 *       7 8 9 10
 *       ..........
 *       ...........*/

#include <stdio.h>
 Int main( )
 {
    int i, j, k = 1;
 
    printf("floyds triangle is\n");
    for( i = 1; k <= 20; ++i )
      {
           for( j = 1; j <= i; ++j )
	     { 
                printf( "%d ", k++ );
	        printf( "\n\n" );
             }
      }
    return 0;
 }
