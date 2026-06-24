#include <stdio.h>

int quadrado(int num) {
    return num * num;
}

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    printf("O quadrado de %d é %d\n", numero, quadrado(numero));

    return 0;
}

