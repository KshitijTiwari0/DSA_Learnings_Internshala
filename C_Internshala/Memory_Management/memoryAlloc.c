// Write a program to input ‘n’ numbers and then find out their sum.

// Use malloc() function to dynamically allocate memory as per the value of ‘n’.
// Consider using ‘float’, since the user input could be a floating-point decimal value.

#include <stdio.h>
#include <stdlib.h>

int main() {
    float *ptr;
    int n;

    puts("Enter n:");
    scanf("%d", &n);

    ptr = (float*)malloc(n * sizeof(float));

    if (ptr == NULL) {
        puts("Memory allocation failure");
    } else {
        for (int i = 0; i < n; i++) {
            ptr[i] = i + 1;
        }

        float sum = 0;
        for (int i = 0; i < n; i++) {
            sum += ptr[i];
        }

        printf("Sum = %.2f\n", sum);
        free(ptr);  // Free the dynamically allocated memory
    }

    return 0;
}
