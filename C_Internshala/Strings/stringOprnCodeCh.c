#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];

    printf("Enter the first string: ");
    scanf("%[^\n]%*c", str1);

    // Clear input buffer stream memory
    while (getchar() != '\n');

    printf("Enter the second string: ");
    scanf("%[^\n]%*c", str2);

    char str3[200]; // Increased the size to accommodate both strings and a space
    strcpy(str3, str1);
    strcat(str3, " "); // Add a space between the two strings
    strcat(str3, str2);

    printf("Concatenated string: %s\n", str3);
    printf("First string: %s\n", str1);

    return 0;
}
