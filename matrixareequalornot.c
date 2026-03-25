#include <stdio.h>

int main() {
    int a[10][10], b[10][10];
    int r, c, i, j;
    int isEqual = 1;

    // Input rows and columns
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    // Input first matrix
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Compare matrices
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            if(a[i][j] != b[i][j]) {
                isEqual = 0;
                break;
            }
        }
        if(isEqual == 0) {
            break;
        }
    }

    // Output result
    if(isEqual == 1) {
        printf("Matrices are equal\n");
    } else {
        printf("Matrices are not equal\n");
    }

    return 0;
}