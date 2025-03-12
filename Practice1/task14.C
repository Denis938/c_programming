#include <stdio.h>

int main () {
    int weight;

    printf ("Enter your weight: ");
    scanf("%d", &weight);

    float new_weight = weight * 0.16333;

    printf ("your weight on moon: %.2f", new_weight);

    return 0;
}