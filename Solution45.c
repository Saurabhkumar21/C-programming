/*Write a C program to check whether a number is negative, positive or zero.*/

#include<stdio.h>

int main()
{
    int num;

    printf("enter any number:");
    scanf("%d", &num);

    if(num > 0)
    {
        printf("number is positive");
    }
    else if(num < 0)
    {
        printf("number is negative");
    }
    
    else{
        printf("number is zero");
    }
    
    return 0;
}