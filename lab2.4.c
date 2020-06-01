#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(){
	
    int n, i, j;
    float a[100][100];
    float b[100][100];

    printf("Enter length of matrix 2*n \nn = "), scanf("%i", &n);

    if (n > 100 || n <= 0){
		
        printf("Enter n that <= 100");
        return 0;
    }

    printf("\nElements: \n");
    for(i = 0 ; i < 2 * n ; i++)
        for(j = 0 ; j < 2 * n ; j++)
            scanf("%f",&a[i][j]);
    
    printf("Matrix a: \n");
    for (i = 0; i < 2*n; i++)
    {
        for (j = 0; j < 2*n; j++)
        {
            printf("%.2f ", a[i][j]);
        }    
        printf("\n");
    }
	
	
    for (i = 0; i < n; i++){
		
        for (j = 0; j < n; j++){
			
            b[i][j] = a[i+n][j];
        }    
    }
   
   for (i = n; i < 2 * n; i++){
		
        for (j = 0; j < n; j++){
			
            b[i][j] = a[i][j+n];
        }    
    }
	
    for (i = n; i < 2 * n; i++){
		
        for (j = n; j < 2 * n; j++){
			
            b[i][j] = a[i-n][j];
        }    
    }	
	
	for (i = 0; i < n; i++){
		
		for (j = n; j < 2 * n; j++){
			
            b[i][j] = a[i][j-n];
        }    
    }
	

    printf("New matrix b: \n");
    for (i = 0; i < 2*n; i++)
    {
        for (j = 0; j < 2*n; j++)
        {
            printf("%.2f ", b[i][j]);
        }    
        printf("\n");
    }

    return 0;
}