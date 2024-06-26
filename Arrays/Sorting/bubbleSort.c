//Write a program that reads random values into an array. 
//Perform bubble sort in such a way that if the array is sorted in less than n-1 passes, 
//then the rest of the passes should be discarded.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int A[20],i,j,temp;
    printf("\nEnter array elements:\n");

    for(i=0;i<10;i++)
    {
        scanf("%d",&A[i]);
    }

    for(i=0;i<9;i++)
    {
        for (j=0;j<10-1-i;j++)
        {
            if(A[i]>A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }

    printf("\n The sorted array elements\n");
    for (i=0;i<10;i++){
        printf("\t%d\n",A[i]);
    }

    return 0;
    
}



