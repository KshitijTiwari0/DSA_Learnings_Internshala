#include<stdio.h>

int main(){
    int array[10];

    for(int i=0; i<10; i++){
        scanf("%d", &array[i]);
    }
    for(int i=0; i<10; i++){
        printf("%d\n", array[i]);
    }
    int largest = array[0];
    for(int i=0; i<10; i++){
        if(array[i] > largest){
            largest = array[i];
        }
    }
    
    printf("Largest number is, %d", largest);
    return 0;
}
