/*write a C program to print all natural numbners from 1 to n.(using while loop)*/

#include<stdio.h>

int main()
{
    int n;
    printf("Enter number:");
    scanf("%d", &n);

    int i=1;
    while(i<=n)
    {
    printf("%d\n",i);
    i++;
    }

    return 0;
}