#include <locale.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>  

void main()
{
	setlocale(LC_ALL, "RU");

	int fn, a, b, c, d;
	puts("������� ������������� �����:");
	scanf("%d", &fn);

	a = fn / 1000;
	b = fn / 100 % 10;
	c = fn / 10 % 10;
	d = fn % 10;

	printf("������ �����\n");
    // �������� ������� �����
    if (a % 2 == 0)
        printf("����� ����� � ������\n");
    else
        printf("����� ����� � ��������\n");

    // �������� ������� �����
    if (b % 2 == 0)
        printf("����� ����� � ������\n");
    else
        printf("����� ����� � ��������\n");

    // �������� ������� ��������
    if (c % 2 == 0)
        printf("����� �������� � ������\n");
    else
        printf("����� �������� � ��������\n");

    // �������� ������� ������
    if (d % 2 == 0)
        printf("����� ������ � ������\n");
    else
        printf("����� ������ � ��������\n");

    system("pause");
    return 0;
}
