#include <stdio.h>

int main () {
    double T;

    printf("Enter seconds: ");
    scanf("%lf", &T);

    int minute = T / 60;
    double seconds = T - (minute * 60);

    printf ("%d minute(s) %.2f second(s)", minute, seconds);

    return 0;
}