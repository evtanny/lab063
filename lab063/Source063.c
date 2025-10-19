#include <locale.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>  

void main()
{
	setlocale(LC_ALL, "RU");

	int fn, a, b, c, d;
	puts("¬ведите четырЄхзначное число:");
	scanf("%d", &fn);

	a = fn / 1000;
	b = fn / 100 % 10;
	c = fn / 10 % 10;
	d = fn % 10;

	printf("јнализ числа\n");
    // ѕроверка разр€да тыс€ч
    if (a % 2 == 0)
        printf("число тыс€ч Ц четное\n");
    else
        printf("число тыс€ч Ц нечетное\n");

    // ѕроверка разр€да сотен
    if (b % 2 == 0)
        printf("число сотен Ц четное\n");
    else
        printf("число сотен Ц нечетное\n");

    // ѕроверка разр€да дес€тков
    if (c % 2 == 0)
        printf("число дес€тков Ц четное\n");
    else
        printf("число дес€тков Ц нечетное\n");

    // ѕроверка разр€да единиц
    if (d % 2 == 0)
        printf("число единиц Ц четное\n");
    else
        printf("число единиц Ц нечетное\n");

    system("pause");
    return 0;
}
