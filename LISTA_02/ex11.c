#include <stdio.h>

int main() {
    int n, i;
    int fatorial = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fatorial *= i;
    }

    printf("%d! = %d\n", n, fatorial);
    return 0;
}
