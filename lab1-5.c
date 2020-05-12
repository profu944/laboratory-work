#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "RUS");
	float a, b, c;
	printf("Впишите число: "); scanf_s("%f", &a);

	if (a < 1)
	   return 0;
	b = 1;
	c = 1;
	while (b <= a) 
	{
		c++;
		b = b + (1 / c);
	}

	printf("Итог %f!", b);
	   return 0;
}