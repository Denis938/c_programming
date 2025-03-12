#include <stdio.h>

int main() {
    int distance;
    int a = 500;

    printf("Enter distance: ");
    scanf("%d", &distance);

    if (distance < a) {
        printf("can't");
    } else {
        printf("can");
    }

    return 0;
}