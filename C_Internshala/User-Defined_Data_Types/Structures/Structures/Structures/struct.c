// Write a program to store details of a book using Structure. 
//The details of the book should contain:

// Title
// Author
// Price
// Define the details of any two of your most favourite books that you have read.

#include <stdio.h>
#include <stdlib.h>


struct Book
{
    /* data */
    char Title[20];
    char Author[20];
    float Price;
};


int main()
{
    struct Book b1,b2;

    strcpy(b1.Title, "HarryPotter");
    strcpy(b1.Author, "JKRowlings");
    b1.Price = 32.33;    
    printf("Name: %s\nAuthor: %s\n Price: %.2f\n", b1.Title,b1.Author,b1.Price);
    strcpy(b2.Title, "HarryPotter");
    strcpy(b2.Author, "JKRowlings");
    b2.Price = 32.33;
    printf("Name: %s\nAuthor: %s\n Price: %.2f", b1.Title,b1.Author,b1.Price);

    return 0;

}

