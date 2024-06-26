#include <stdio.h>

int main()
{
    int a[10],lft=0,rt=9,md=(lft+rt)/2,val,i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the value you want to search");
    scanf("%d",&val);
    while(lft<=rt)
    {
        if(val>a[md])
        {
            lft=md+1;
        }
        else if(val<a[md])
        {
            rt=md-1;
        }
        else
        {
            printf("Value found at %dth position",md+1);
            break; //jumps out of loop block
        }
        md = (lft+rt)/2;

    } //end of loop

    return 0;
}