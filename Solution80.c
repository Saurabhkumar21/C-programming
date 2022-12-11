/*C program to find sum of natural numbers between 1 to n.*/

#include<stdio.h>

int main()
{
    int i, n, sum=0;

    printf("Enter number:");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        sum+=i;
    }
    printf("sum of all natural numbers from 1 to %d = %d",n,sum);

    return 0;
}