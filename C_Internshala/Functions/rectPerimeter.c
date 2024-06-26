// Write a program to calculate the perimeter of a given rectangle.

// Take the length and breadth of the rectangle as user input.
// The length and breadth could be a decimal value entered by the user.
// Define a function that will accept the length and breadth of the rectangle
// as parameters and return the perimeter of that rectangle.
// Additionally, you can greet the user with a welcome message. 
// To keep the main function clean, put the code to greet the user within a separate function.

#include <stdio.h>

// function declaration
float rectPerimeter(float,float);
void welcome();
int main()
{

    welcome(); 

    float x,y;
    printf("Length");
    scanf("%f",&x);
    printf("\nBreadth");
    scanf("%f",&y);

    float a = rectPerimeter(x,y);
    printf("\n %.2f",a);
    
}

float rectPerimeter(float x, float y){
    return 2*(x+y);
}
void welcome(){
    printf("Welcome!");
}