#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define size 5

int main(){
	
	float result[size], a[size]; int counter = 0;
	
	printf("Enter %d nums: ", size);			
	for (int i = 0; i < size; i++){
		
		scanf("%f", &a[i]);
		if (a[i] < 0) {result[counter] = a[i], counter++;}; //ввод в ресультат отрицательныех чисел
	}
	
	for (int i = 0; i < size; i++)	
		if (a[i] >= 0){
		
			result[counter] = a[i];
			counter++;
		} 
	
	for (int i = 0; i < size; i++) 	
		
		printf("%f ", result[i]);
		
	return 0;	
}