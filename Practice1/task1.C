#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Russian");

    int mass;
    printf("Enter your massa: ");
    scanf("%d", &mass);

    if (mass >= 60 && mass <= 90) {
        printf("you can qualify!!!");
    } else {
        printf("you not can qualify(");
    }

    return 0;
}