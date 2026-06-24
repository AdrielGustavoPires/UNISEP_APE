#include <stdio.h>

int square(int num) {
    return num * num;
}

int main() {
    int number;
    
    printf("Digite um número: ");
    scanf("%d", &number);
    
    int result = square(number);
    
    printf("O quadrado de %d é: %d\n", number, result);
    
    return 0;
}
