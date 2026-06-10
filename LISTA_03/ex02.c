#include  <stdio.h>

int main() {
    int numero;
    
    for(int i = 0; i <10; i++) {
        printf("Digite o número %d: ", i, i);
        scanf("%d", &numero);
    }

    if (numero % 2 == 0) {

        printf("numero par: %d\n",numero);
    }
    return 0;

}