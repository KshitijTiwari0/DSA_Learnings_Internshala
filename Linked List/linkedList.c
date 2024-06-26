#include <stdio.h>
#include <stdlib.h>

typedef struct linklist {
    int no; // data
    struct linklist *link;
} node;

node *create(node *start) {
    node *temp, *p;
    char ch;

    printf("\n\t\t *** INPUT BLOCK ***\n");
    if (start != NULL) {
        printf("\n\t\t *** LIST ALREADY EXISTS *****");
        printf("\n\n\t Press any key to continue...");
        getchar(); // Wait for a key press
        return start;
    }
    fflush(stdin);

    do {
        temp = (node *)malloc(sizeof(node));
        if (temp == NULL) {
            printf("\nMemory allocation failed. Exiting...");
            exit(1);
        }
        printf("\n\t Enter the no :==>");
        scanf("%d", &temp->no);
        temp->link = NULL;
        if (start == NULL)
            p = start = temp;
        else {
            p->link = temp;
            p = temp;
        }
        printf("\t Do you want to continue (y/n) ? :");
        scanf(" %c", &ch); // Read a single character and ignore whitespace
    } while (ch == 'y');

    return start;
}

void print(node *start) {
    node *temp;
    system("cls");
    printf("\n\n Base address  Number  Link");
    printf("\n=======================");
    for (temp = start; temp != NULL; temp = temp->link) {
        printf("\n%10u  %10d  %10u", temp, temp->no, temp->link);
    }
    printf("\n\n\t Press any key to go to MAIN BLOCK....");
    getchar(); // Wait for a key press
}

int main() {
    node *start = NULL;
    start = create(start);
    print(start); // Call the print function
    return 0;
}
