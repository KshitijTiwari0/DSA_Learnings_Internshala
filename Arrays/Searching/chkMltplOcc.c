//Write a program that searches for multiple occurrences of a value. 
//It should print all the locations where that value is present. 
//Print number of occurrences also. 
#include <stdio.h>

int main()
{
    int a[10] = {1,2,3,4,5,6,5,7,5,9};

    int duplicates = 0;

    printf("Duplicate values found at positions:\n");

    for(int i = 0; i < 10; i++)
    {
        for(int j = i+1; j<10; j++)
            if(a[i] == a[j])
            {
                printf("%d\n",j+1);
                duplicates++;
                break; // Break to avoid printing the same duplicate multiple times
            }

    }

    if (duplicates > 0)
    {
        printf("\nTotal duplicates found: %d\n",duplicates);
    }
    else{
        printf("\nNo duplicates found");
    }
    return 0;
}

