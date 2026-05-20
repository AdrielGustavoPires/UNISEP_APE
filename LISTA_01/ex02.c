#include <stdio.h>

int main() {
    
    int salario, bonus, salario_final;

    printf("Digite o salário do funcionário: ");
    scanf("%d", &salario);

    if (salario < 3000) {
        bonus = salario * 0.05;
    } else {
        bonus = salario * 0.10;
    }
    salario_final = salario + bonus;
    printf(" O salário final e: %d\n", salario_final);

    return 0;
}