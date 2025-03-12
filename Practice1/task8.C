#include <stdio.h>

int main () {
    int n;

    printf ("Enter cargo: ");
    scanf ("%d", &n);

    if (n % 4 == 0) {
        int weight_per_section = n / 4;
        printf ("Yes");
        printf("Each section will carry %d kg", weight_per_section);
    } else {
        printf ("NOOOO!!!");
    }
    return 0;
}