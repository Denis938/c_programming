#include <stdio.h>

int main () {
    int corner;

    printf("Enter corner: ");
    scanf("%d", &corner);

    if (corner >= 180 && corner <= -180) {
        printf("Out of range");
    } else {
        printf("Not out of range");
    }

    return 0;
}