#include <stdio.h>

int main() {
    char symbol;

    printf("Введите символ: ");
    scanf("%c", &symbol);

    if (symbol >= 'A' && symbol <= 'Z') {
        printf("Символ входит в допустимый диапазон.\n");
    } else {
        printf("Символ не входит в допустимый диапазон.\n");
    }

    return 0;
}