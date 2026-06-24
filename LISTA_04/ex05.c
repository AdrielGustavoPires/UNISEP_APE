#include <stdio.h>

long factorial(int num) {
    if (num < 0) {
        return -1; 
    }
    if (num == 0 || num == 1) {
        return 1;
    }
    
    long result = 1;
    for (int i = 2; i <= num; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int number;
    
    printf("Digite um número: ");
    scanf("%d", &number);
    
    long result = factorial(number);
    
    if (result == -1) {
        printf("Erro: Não é possível calcular fatorial de número negativo!\n");
    } else {
        printf("%d! = %ld\n", number, result);
    }
    
    return 0;
}
