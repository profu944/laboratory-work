#include <stdio.h>
#include <math.h>
#define SIZE 10

int main() {
	double a[SIZE],b,y,t,f = 0;
	int n,c=0;

	printf("N = ");
	scanf_s("%i", &n);

	if (n <= 0 || n > SIZE) {
		printf("N out of range!\n");
		return 0;
	}

	for (int i = 0; i < n; i++) {
		printf("gimme ");
		scanf_s("%lf", &b);
		a[i] = b;
	}
	for (int i = 0; i < n; i++)
		if ((fmod(a[i], 2.0) == 0) && (f == 0))
			f = a[i];
	for (int i = 0; i < n; i++) {
		y = fmod(a[i], 2.0);
		t = fmod(f, 2.0);
		if (fmod(a[i], trunc(a[i])) != 0)
			continue;
		else if (((t == 0) && (y == 0)) || ((y != 0) && (t != 0))) {
			c = 1;
			f=a[i];
		}
		else if ((t != 0) && (y == 0)) {
			c = 0;
			break;
		}
		else if ((t == 0) && (y != 0)) {
			if ((fmod(a[i + 1], 2.0) == 0) && (i+1<n-1)) {
				c = 0;
				break;
			}
			c = 1;
		}

	}
	if (c == 1) {
		int i = n-1;
		while (i >= 0) {
			if (a[i] < 0)
				printf("%lf ", a[i]);
			i--;
		}
	}
	else if (c == 0) {
		int i = n-1;
		while (i >= 0) {
			if (a[i] >= 0)
				printf("%lf ", a[i]);
			i--;
		}
	}
	return 0;
}