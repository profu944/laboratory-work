#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <math.h>
#include <stdio.h>

int main(void)

{
        setlocale(LC_ALL, "RUS");
	int i, n, x;
	float c, b, a;

	printf("Впишите n "); scanf_s("%i", &n);
	printf("Впишите x "); scanf_s("%f", &x);

	b = 1;
	c = 1;
	for (int i = 1; i <= n; i++)

	{
		a = (sin(i * x));
		b = (a / c) + 1;
		c = i * i;
	}

	printf("Итог = %i", b);
	   return 0;

}