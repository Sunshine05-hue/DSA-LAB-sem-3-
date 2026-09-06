#include <stdio.h>

int main() {
    int oneD[5];          
    int twoD[2][3];       
    int i, j;             
    printf("--- Input 1D Array (5 elements) ---\n");
    for(i = 0; i < 5; i++) {
        printf("Enter element at index [%d]: ", i);
        scanf("%d", &oneD[i]);
    }
    printf("\n--- Input 2D Array (2 rows x 3 columns) ---\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("Enter element at position [%d][%d]: ", i, j);
            scanf("%d", &twoD[i][j]);
        }
    }
    printf("\n--- Accessing Specific Elements ---\n");
    printf("1D Array element at index 2: %d\n", oneD[2]);
    printf("2D Array element at position [1][2]: %d\n", twoD[1][2]);
    printf("\n--- Traversing 1D Array ---\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", oneD[i]);
    }
    printf("\n");

    printf("\n--- Traversing 2D Array ---\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", twoD[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}
