// Write a program to display the nth Fibonacci number in the Fibonacci series.

// The value ‘n’ will be entered by the user.
// The Fibonacci series is a series of numbers in the following sequence:
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, …..
// Where the 0th Fibonacci number is 0 and the 6th Fibonacci number is 8.
// Except for the first two numbers (0 and 1) of the sequence, every other 
//number in the sequence is the sum of the previous two numbers, for example, 8 = 3 + 5 (addition of 3 and 5).

#include <stdio.h>

int Fibonacci(int);

int main() {
    int n;
    printf("Enter the value of 'n': ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
    } else {
        int result = Fibonacci(n);
        printf("The %dth Fibonacci number is: %d\n", n, result);
    }

    return 0;
}

int Fibonacci(int n) {

    //Base cases: Fibonacci of 0 is 0,and Fibonacci of 1 is 1
    if (n==0) {
        return 0;
    }else if(n==1) {
        return 1;
    } else {
        //Recursive case: Fibonacci(n) = Fibbonacci(n-1) + Fibonacci(n-2)
        return Fibonacci(n-1) + Fibonacci(n-2);
    }


}