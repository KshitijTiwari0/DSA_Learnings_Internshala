#include <stdio.h>
#include <stdlib.h>

int main() {
    int num_countries;

    // Ask the user for the number of countries
    printf("Enter the number of countries: ");
    scanf("%d", &num_countries);

    // Dynamically allocate memory for the GDP array
    double *GDP = (double *)malloc(num_countries * sizeof(double));

    // Check if memory allocation was successful
    if (GDP == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1; // Exit with error code
    }

    // Read and print the GDP values of the countries
    printf("Enter the GDP values of the countries:\n");
    for (int i = 0; i < num_countries; i++) {
        printf("Country %d GDP: ", i + 1);
        scanf("%lf", &GDP[i]);
    }

    printf("\nGDP values of the countries:\n");
    for (int i = 0; i < num_countries; i++) {
        printf("Country %d GDP: %.2f\n", i + 1, GDP[i]);
    }

    // Free dynamically allocated memory
    free(GDP);

    return 0;
}
