// WAP to find the largest number in the given array using a pointer.

// The array is: float numbers[5] = {983, 2.9, 34, 433, 1000.567};
// Create a user-defined function that will accept the pointer as a parameter.
// The pointer should point to the array defined in the main function.
// Using pointer find the largest number in the user-defined function 
//and return the largest number to the main function.

#include <stdio.h>

float largest(float *, int);

int main() {
    float numbers[5] = {983, 2.9, 34, 433, 1000.567};
    float *p;
    
    p = numbers;

    float lgst = largest(p, 5);

    printf("The largest number is: %.3f", lgst);

    return 0;
}

float largest(float *ptr, int size) {
    float l = *ptr;

    for (int i = 1; i < size; i++) {
        if (*(ptr + i) > l) {
            l = *(ptr + i);
        }
    }

    return l;
}
