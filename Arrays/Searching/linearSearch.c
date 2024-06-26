//Linear Search Implementation Program
#include<stdio.h>
int main(){
    int sc[10],i,val;

    printf("\nEnter elements in array:\n");
    for(i=0;i<10;i++){
        scanf("%d",&sc[i]);
    }

    printf("\nWha number you want to find:\n");
    scanf("%d",&val);

    for(i=0;i<10;i++) //search loop
    {
        if(sc[i]==val){
            printf("\nValue exists at %dth position",i+1);
            break; //to exit from loop
        }

    }
    if(i==10){
        printf("\nValue does not exist");
    }

    return 0;

}