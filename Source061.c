#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "RU");

    int years; // a. ���������� ����������
    puts("������� ���"); // b. ����������� � �����
    scanf("%d", &years); // c. ���� � ����������

    if ((years % 4 == 0 && years % 100 != 0) || years % 400 == 0) {
        puts("��� ����������");
    }
    else {
        printf("��� %d �� ����������\n", years);
    }

}
