#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");
    int a, b, n, res;
    printf("������� ����������� ����� n: \n"); scanf("%d", &n);
    a = 2;
    if (n >= 0) {
        
    
        if (n%a == 0) {
            b = n/a;
            printf("����������� ����������� ����� ������� ������ ���������� ������ = %d", b);
        }
        else {
            b = (n - 1)/2;
            printf("����������� ����������� ����� ������� ������ ���������� ������ = %d", b);
        }
    }
    else {
         printf("�� ����� ���� ������");
    }
}
