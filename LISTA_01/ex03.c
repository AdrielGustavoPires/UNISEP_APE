#include <stdio.h>

int main() {
   float num1, num2, resultado;
    char operacao;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    printf("Digite a operação (+, -, *, /): ");
    scanf(" %c", &operacao);

    if (operacao == '+'){
        resultado = num1 + num2;
    } else if (operacao == '-'){
        resultado = num1 - num2;
    }
    else if (operacao == '*'){
        resultado = num1 * num2;
    }
    else if (operacao == '/'){
        resultado = num1 / num2;
    }
    else {
        printf("Operação inválida\n");
    return 0;
    }
    printf("O resultado é: %.2f\n", resultado);
    return 0;  
}

