#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");

    int mass;
    printf("Введите вашу массу в кг: ");
    scanf("%d", &mass);

    if (mass >= 60 && mass <= 90) {
        printf("Вы можете пройти отбор на Буран!\n");
    } else {
        printf("Извините, ваша масса не соответствует требованиям.\n");
    }

    return 0;
}