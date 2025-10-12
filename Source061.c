#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "RU");

    int years; // a. объявление переменной
    puts("Введите год"); // b. приглашение к вводу
    scanf("%d", &years); // c. ввод с клавиатуры

    if ((years % 4 == 0 && years % 100 != 0) || years % 400 == 0) {
        puts("Год високосный");
    }
    else {
        printf("Год %d не високосный\n", years);
    }

}
