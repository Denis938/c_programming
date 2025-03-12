#include <stdio.h>
#include <math.h>

int main () {
    double calculated;
    double actual;

    printf("Enter calculated speed: ");
    scanf("%lf", &calculated);
    printf("Enter actual speed: ");
    scanf("%lf", &actual);

    double dif_speed = fabs(calculated - actual);

    if (dif_speed > 0.1) {
        printf ("Orbit is unstable");
    } else {
        printf ("Orbit is stable");
    }
    return 0;
}