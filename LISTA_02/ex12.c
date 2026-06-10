#include <stdio.h>

int main( )
{
    int count = 0;

    for ( int i = 1; i <=50; i++ ){
        if ( i % 2 == 0 )
            count++;
    }
    
    printf("Quantidade de numeros pares entre 1 e 50: %d\n", count);
    return 0;
    


}    