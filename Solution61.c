/*Write a C program to print number of days in a month using switch case.*/

#include<stdio.h>

int main()
{
    int month;

    printf("Enter month of number(1-12):");
    scanf("%d", &month);

    switch(month)
    {
        case 1:
        printf("31days");
        break;

        case 2:
        printf("28/29days");
        break;

        case 3:
        printf("31days");
        break;

        case 4:
        printf("30days");
        break;

        case 5:
        printf("31days");
        break;

        case 6:
        printf("30days");
        break;

        case 7:
        printf("30days");
        break;

        case 8:
        printf("31days");
        break;

        case 9:
        printf("30days");
        break;

        case 10:
        printf("31days");
        break;

        case11:
        printf("30days");
        break;

        case12:
        printf("31days");
        break;

        default:
        printf("Invalid input!");


    }

    return 0;
}