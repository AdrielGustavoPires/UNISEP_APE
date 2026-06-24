#include <stdio.h>

int soma(int A, int B){
    return A + B;
}
    char nome_uma_letra(){
        return 'A';
    }
//processo
void boa_noite(){
    printf("Boa noite!\n");
}

int main()
{
    printf("A soma de 2 e 3 é: %d\n", soma(2,3));
    
    printf("A soma de 10 e 20 é: %d\n", soma(10,20));

    printf("A função nome_uma_letra retorna: %c\n", nome_uma_letra());

    boa_noite();
    boa_noite();
    boa_noite();
    return 0;
}