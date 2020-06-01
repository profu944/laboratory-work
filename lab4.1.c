#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

struct znak{	

	char firstname[100];
	char lastname[100];
	char zodiac[100];
	int birthday[3];
};

int complare(void const *a, void const *b){
	
		struct znak *word_a = (struct znak *)a;
		struct znak *word_b = (struct znak *)b;

		return strcmp(word_a->zodiac, word_b->zodiac);
}

int main(void)
{
		char c, com[20];
		int counter = 0, check = 0, month, birthday[3];
		char firstname[100], lastname[100], zodiac[100];
		
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);
		
		struct znak sign[12];
		
		printf("If you want to end input print exit while entering the name\n");
		
		for (int s = 0; s<12; s++){
			
			printf ("Enter firstname: "); scanf("%s", &firstname);
			if (strcmp("exit", firstname) == 0) break;
			printf ("Enter lastname: "); scanf("%s", &lastname);
			printf ("Enter Zodiac sign: "); scanf("%s", &zodiac);
			printf ("Enter birthday with a space (12 5 2003): ");
			for (int i = 0; i < 3; i++)
				scanf("%d", &birthday[i]);
			
			strcpy(sign[s].firstname, firstname);
			strcpy(sign[s].lastname, lastname);
			strcpy(sign[s].zodiac, zodiac);
			memcpy(sign[s].birthday, birthday, sizeof(birthday));
			printf ("\n");
			counter++;
		}
				
		qsort(sign, counter, sizeof(struct znak), complare);
		
		printf("Enter a month to see all the people who matched: "); scanf("%d", &month);
		
		for (int i = 0; i<counter; i++){
			
			if (sign[i].birthday[1] == month){
				
				printf ("There is that person: %s, %s, %s", sign[i].firstname, sign[i].lastname, sign[i].zodiac);
				printf (", %d.%d.%d\n", sign[i].birthday[0], sign[i].birthday[1], sign[i].birthday[2]);
			}
		}
		
		return 0;
}			