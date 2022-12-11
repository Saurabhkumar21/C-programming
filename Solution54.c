/* Write a C program to input month number and print number of days in that month.*/

#include<stdio.h>

int main()
{
    int m;

    printf("enter month:");
    scanf("%d", &m);

    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
    {
        printf("31days.");
    }
    else if(m==4||m==6||m==9||m==11)
    {
        printf("30days.");
    }
    else if(m==2)
    {
        printf("28/29days.");
    }
    else
    {
        printf("invalid input");
    }

    return 0;
}