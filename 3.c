#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	
	FILE* input, * odd, * even;
	int SIZE = 10, count = 0, zeroCounert = 0;
	int* a = (int*)malloc(SIZE * sizeof(int));
	int v;

	if ((input = fopen("input.txt", "r")) == NULL)
	{
		printf("Input file is not exist\n");
		return 0;
	}
	
	if ((odd = fopen("odd.txt", "w")) == NULL)
	{
		printf("Odd file is not exist\n");
		return 0;
	}
	
	if ((even = fopen("even.txt", "w")) == NULL)
	{
		printf("Even file is not exist\n");
		return 0;
	}
	
	while (fscanf(input, "%d", &v) != EOF)
	{
		if (count == SIZE)
		{
			SIZE += 10;
			a = (int*)realloc(a, SIZE * sizeof(int));
			if (a == NULL)
			{
				fclose(input);
				free(a);
				return 0;
			}

		}
		a[count] = v;
		count++;
	}
	
	for (int i = 0; i < count; i++){
		if (a[i] % 2 == 0){
			
			fprintf(odd, "%d ", a[i]);
		}
		
		if (a[i] % 2 != 0){
			
			fprintf(even, "%d ", a[i]);
		}
	}	
		
	fclose(input);
	fclose(odd);
	fclose(even);
	free(a);
}

