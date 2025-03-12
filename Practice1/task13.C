#include <stdio.h>

int main () {
    int n;

    printf ("Enter: ");
    scanf("%d", &n);

    if (n % 2 == 1) {
        printf("can't");
    } else {
        printf("can");
    }
}