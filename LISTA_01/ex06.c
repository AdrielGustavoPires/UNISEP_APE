#include <stdio.h>

int main() {
 float consumo, tarifa, total;
 
 printf("Digite o consumo de energia em kWh: ");
    scanf("%f", &consumo);
if (consumo <= 100){
    tarifa = 0.50;
}
else if (consumo <=200){
    tarifa = 0.75;
}
else {
    tarifa = 1.00;
}
total = consumo * tarifa;

printf("O valor total e: R$ %.2f\n", total);

return 0;


}