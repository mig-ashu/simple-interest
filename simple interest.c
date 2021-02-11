#include<stdio.h>

int main()
{
    int amount,time;
    float rate;
    printf("Enter the amount\n");
    scanf("%d",&amount);
    printf("Enter rate\n");
    scanf("%f",&rate);
    printf("Enter time(In months)\n");
    scanf("%d",&time);
    printf("The interest of %d = %0.3f",amount,amount*time*rate/100);
    
    return 0;
}