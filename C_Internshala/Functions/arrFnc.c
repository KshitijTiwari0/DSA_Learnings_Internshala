// Write a program to find the number of odd numbers in the given array.

// The array is: int numbers[10] = {2, 98, 99, 27, 31, 53, 88, 92, 11, 12};
// Create a function that accepts an array of integer values.
// The function should find out the number of odd numbers in the array and then print the result.

#include <stdio.h>

void oddOneOut(int[], int);

int main() {
  int a[10] = {2, 98, 99, 27, 31, 53, 88, 92, 11, 12};
  oddOneOut(a, 10);
  return 0;
}

void oddOneOut(int array[], int size) {
    for (int i = 0; i < size; i++) {
        if (array[i] % 2 != 0) {
            printf("%d ", array[i]);
        }
    }
}
