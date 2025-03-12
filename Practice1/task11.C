#include <stdio.h> 

int main () {
    float oxygen;

    printf("Enter stocks oxygen: ");
    scanf("%f", &oxygen);

    if (oxygen < 15.0) {
        printf ("Warning: Oxygen level is below 15%!!!");
    } else {
        printf ("Oxygen level is sufficient");
    }
    return 0;
}