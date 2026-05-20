#include <stdio.h>

int main() {
    int num1, num2;
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    if( num1 % num2 ==0 ) {
        printf("o primeiro número e múltiplo do segundo\n");
    } else {
        printf("o primeiro número NAO e múltiplo do segundo\n");
    }

    return 0;

}