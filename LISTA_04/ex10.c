#include <stdio.h>

int mdc(int a, int b)
{
    if (a < 0) a = -a;
    if (b < 0) b = -b;

    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(void)
{
    int x, y;

    printf("Digite dois números inteiros: ");
    if (scanf("%d %d", &x, &y) != 2) {
        printf("Entrada inválida.\n");
        return 1;
    }

    printf("O MDC de %d e %d é: %d\n", x, y, mdc(x, y));
    return 0;
}
