/*Write a C program input week number and print week day.*/

#include<stdio.h>

int main()
{
    int week;

    printf("Enter week number (1-7):");
    scanf("%d", &week);

    if(week == 1)
    {
        printf("Monday", week);
    }
    else if(week == 2)
    {
        printf("Tuesday", week);
    }
    else if(week == 3)
    {
        printf("Wednesday", week);
    }
    else if(week == 4)
    {
        printf("Thursday", week);
    }
    else if(week == 5)
    {
        printf("friday", week);
    }
    else if(week == 6)
    {
        printf("Saturday", week);
    }
    else if(week == 7)
    {
        printf("Sunday", week);
    }
    else
    {
        printf("Invalid Input!");
    }

    return 0;
}

