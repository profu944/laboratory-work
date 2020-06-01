#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define size 5

int main(){
	
	int a[size], minIndex, maxIndex;
	int min = 32767, max = -32768;
	
	printf("Enter %d nums: ", size);			
	for (int i = 0; i < size; i++){
		
		scanf("%d", &a[i]);
		if (a[i] <= min) {min = a[i]; minIndex = i;}
	}
	
	for (int i = 0; i < size; i++){
	
		if (a[i] > max) {max = a[i]; maxIndex = i;}
	}	
	
	
	if (minIndex > maxIndex) {
			int tmp = minIndex;
			minIndex = maxIndex;
			maxIndex = tmp;
	}

	for(int i = 0; i < size; i++) {

	for(int j = minIndex + 1; j < maxIndex - i - 1; j++) {

			if(a[j] < a[j+1]) {

				int tmp = a[j];
				a[j] = a[j+1] ;
				a[j+1] = tmp;
			}
		}
	}
	
	for (int i = 0; i < size; i++) 	printf("%d ", a[i]);
	
	return 0;
}