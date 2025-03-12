#include <stdio.h>

int main () {
    int num_cosmonauts;

    printf("Enter quantity cosmonauts: ");
    scanf("%d", &num_cosmonauts);


    int num_crew = 0;
    
    do {
        num_cosmonauts--;
        num_crew++;
        printf("quantity crew: %d", num_crew);
    } while (num_cosmonauts <= 4);

    return 0;
}