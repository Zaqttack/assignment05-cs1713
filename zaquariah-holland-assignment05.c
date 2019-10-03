#include <stdio.h>

void printTriangle(int N) {
    int i, j, k, coeff = 1;
    
    for (i = 0; i <= N; i++) { 
        if (i == 1) {
            coeff = 1;
        }
        else { 
            for (j = 1; j <= N - i; j++) {
                printf(".");
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
}

int main(int argv, char* argc[]) {
    int N = 0;
    
    printf("Enter number of rows : ");
    scanf("%d", &N);
    
    printTriangle(N);
    
    return 0;
}