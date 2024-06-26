// Write a program to input a 2D array of size 2 * 3, print all the elements in the form of a matrix
// and then find out the sum of all the elements entered in the 2D array.

#include <stdio.h>

int main() {
    int array[2][3];
    for(int i=0;i < 2;i++){
        for(int j=0;j < 3;j++){
            scanf("%d",&array[i][j]);
        }
    }
    for(int i=0;i < 2;i++){
        for(int j=0;j < 3;j++){
            printf("%d",array[i][j]);
        }
        printf("\n");
    }
    int sum = array[0][0];
    for(int i=0;i < 2;i++){
        for(int j=0;j < 3;j++){
            sum += array[i][j];
        }
    }

    printf("sum = %d\n",sum);
}