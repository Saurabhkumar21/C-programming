/*Write a C program to print the number from 1 to n in increasing order.*/

#include<stdio.h>

int main()
{
    int i, j, rows;

    printf("Enter number of rows:");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;

}
