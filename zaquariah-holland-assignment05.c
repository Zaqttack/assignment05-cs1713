/*
	zaquariah-holland-assignment05.c
	Assignment 05
	Zaquariah Holland
	
	This .c main file to calculates Pascal's Triangle.
*/
#include <stdio.h>

/*
	Function: printTriangle
	-------------------
	Takes a users int input and calculates Pascal's Triangle while omitting the second row. 
	
	N: a user input for amount of rows.
	
	Returns: VOID
*/
void printTriangle(int N) {
    int i, j, k, coeff = 1;
    
    for (i = 0; i <= N; i++) { 
		for (j = 1; j <= N - i; j++) {
			printf(" ");
		}
		for (k = 0; k <= i; k++) {
			if (i == 0 || k == 0) {
				coeff = 1;
			}
			else {
				coeff = coeff * (i - k + 1) / k;
			}
			printf("%d ", coeff);
		}
		printf("\n");
    }
}

/*
	Function: main
	-------------------
	Main driver for the program asking for user input and calling printTriangle function.
	
	Returns: 0
*/
int main(int argv, char* argc[]) {
    int N = 0;
    
    printf("Enter number of rows : ");
    scanf("%d", &N);
    
    printTriangle(N);
    
    return 0;
}