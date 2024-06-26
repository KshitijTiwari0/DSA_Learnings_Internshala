#include <stdio.h>

int main(){
    int n,count;
    float biggest;

    printf("Enter the size of the array");

    scanf("%d",&n);

    float values[n];

    for (count=0;count<n;++count)
    {
        printf("%0.2f",values[count]);
        scanf("%0.2f",&biggest);
    } //end of loop block

    biggest = values[0];

    for (count=0;count<n;++count)
    {
        if(values[count]>biggest)
        {
            biggest = values[count];
        }
    }
    printf("Biggest value: %0.2f",biggest);

}