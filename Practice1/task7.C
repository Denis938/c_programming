#include <stdio.h>

int main() {
    float frequency;
    
    printf("Enter the signal frequency in GHz: ");
    scanf("%f", &frequency);
    
    if (frequency >= 2.5 && frequency <= 3.5) {
        printf("Stable communication with Earth");
    } else {
        printf("Unstable communication with Earth");
    }
    
    return 0;
}