#include <stdio.h>

int main() {
    float peso, frete;

    printf("Digite o peso do produto: ");
    scanf("%f", &peso);

    if (peso <= 5) {
        frete = 10;
    }
    else if (peso <= 20) {
        frete = 20;
    }
    else {
        frete = 50;
    }

    printf("O valor do frete e: %.2f\n", frete);

    return 0;

}