// Write a program to finds out the smallest as well as the second smallest in a float 1-D array.



#include <stdio.h>

int main()
{
    float array[5] = {1.6, 1.3, 1.0, 1.5, 1.6};
    float smallest = array[0];
    for (int i = 0; i < 5; i++)
    {
        if(array[i]<smallest)
        {
            smallest = array[i];

        }

    }
    printf("Smallest number: %.1f\n", smallest);
    float secondSmallest = array[0];
    for (int i = 0; i < 5; i++)
    {
        if(array[i] != smallest && array[i]<secondSmallest)
        {
            secondSmallest = array[i];

        }

    }

    printf("Second smallest: %.1f\n", secondSmallest);

    return 0;

}