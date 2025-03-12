#include <stdio.h>

int main() {
    int temperature;
    
    printf("Enter the temperature: ");
    scanf("%d", &temperature);
    
    if (temperature >= -150 && temperature <= 120) {
        printf("The temperature is within the acceptable range");
    } else {
        printf("The temperature is outside the acceptable range");
    }
    
    return 0;
}