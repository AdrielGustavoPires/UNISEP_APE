#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if (num < 2) {
        return 0; 
    }
    if (num == 2) {
        return 1; 
    }
    if (num % 2 == 0) {
        return 0; 
    }
    
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            return 0; 
        }
    }
    
    return 1; 
}

int main() {
    int number;
    
    printf("Digite um número: ");
    scanf("%d", &number);
    
    if (isPrime(number)) {
        printf("%d é um número primo!\n", number);
    } else {
        printf("%d não é um número primo.\n", number);
    }
    
    return 0;
}
