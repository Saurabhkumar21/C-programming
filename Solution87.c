/*Write a C program to print star pattern in decreasing order from 5 to 1.*/

#include<stdio.h>

int main()
{
    int i, j, rows;
    printf("enter number of rows:");
    scanf("%d", &rows);
    for(i=rows; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}