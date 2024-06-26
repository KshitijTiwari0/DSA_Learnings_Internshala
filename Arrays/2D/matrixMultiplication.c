#include <stdio.h>

int main() {
    int a[][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int b[][3] = {
        {2, 1, 3},
        {1, 4, 6},
        {3, 5, 7}
    };

    int c[3][3], sum, i, j, j1;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            sum = 0; // Initialize sum for each element in result matrix
            for (j1 = 0; j1 < 3; j1++) {
                sum += a[i][j1] * b[j1][j]; // Corrected matrix multiplication
            }
            c[i][j] = sum;
        }
    }

    // Printing the result matrix
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
