#include <stdio.h>
float simple_interest(); //function declaration
int main(){
    float interest = simple_interest();
    printf("Interest = %f\n", interest);
    return 0;
}
float simple_interest() //function definition
{
    float principal;
    float rate;
    float time;

    printf("ENTER PRINCIPAL:\t");
    scanf("%f",&principal);
    printf("%f\n",principal);

    printf("ENTER RATE:\t");
    scanf("%f",&rate);
    printf("%f\n",rate);

    printf("ENTER TIME:\t");
    scanf("%f",&time);
    printf("%f\n",time);

    return principal * rate * time;

}