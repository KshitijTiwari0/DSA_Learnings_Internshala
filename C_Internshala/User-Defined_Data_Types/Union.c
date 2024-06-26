// Write a program to store details of a book using Union and print the details. The details of the book should contain:

// Title
// Author
// Price
// Define the details of any two of your most favourite books that you have read.

#include <stdio.h>
#include <stdlib.h>


union Book
{
    /* data */
    char Title[20];
    char Author[20];
    float Price;
};


int main()
{
    union Book b1,b2;

    strcpy(b1.Title, "HarryPotter");
    printf("Title: %s\n", b1.Title);
    strcpy(b1.Author, "JKRowlings");
    printf("Author: %s\n", b1.Author);
    b1.Price = 32.33;   
    printf("Price: %f\n", b1.Price); 
    
    strcpy(b2.Title, "HarryPotter");
    printf("Title: %s\n", b2.Title);

    strcpy(b2.Author, "JKRowlings");
    strcpy(b2.Author, "JKRowlings");

    b2.Price = 32.33;
    printf("Price: %f\n", b2.Price); 

    return 0;

}

