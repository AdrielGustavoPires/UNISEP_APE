#include <stdio.h>


float celsiusToFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

int main() {
    float temperature;
    
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &temperature);
    
    float fahrenheit = celsiusToFahrenheit(temperature);
    
    printf("%.2f°C = %.2f°F\n", temperature, fahrenheit);
    
    return 0;
}
