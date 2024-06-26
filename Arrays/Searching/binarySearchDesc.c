//Write a program that searches a value from an array, 
//elements of which are in descending order, 
//using binary search . 

#include <stdio.h>

int main()
{
    int a[10] = {10,9,8,7,6,5,4,3,2,1};
    int lft=0,rt=9,md=(lft+rt)/2;
    int val = 4;
    while(lft<rt)
    {
        if(val<a[md])
        {
            lft= md-1;
        }
        else if(val>a[md])
        {
            rt = md+1;
        }
        else 
        {
            printf("Value found at %dth position\n",md+1);
            break;
        }
        md = (lft+rt)/2;
    }

    return 0;
}