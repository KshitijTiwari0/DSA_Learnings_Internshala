// Write a program to input two integers and 
//find the sum of those two numbers by using pointers.

// Define two integer variables and get user input.
// Define two pointers for each integer variable.
// Find the sum and print the result

#include <stdio.h>

int main(){
    int x, y;
    scanf("%d",&x);
    scanf("%d",&y);

    int *a;
    int *b;

    a = &x; //address of x
    b = &y; //address of y

    int sum = (*a) + (*b); //Value at address of x + Value at address of y 

    printf("%d",sum);
    
    return 0;

}