/*Write a C program to check whether a number is prime or not.*/

#include<stdio.h>

int main()
{
    int i, n, flag=0;

    printf("enter a positive integer:");
    scanf("%d", &n);

    if(n==0 || n==1)
    flag=1;

    for(i=2; i<=n/2; i++)
    {
         if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if (flag==0)
    printf("%d is prime number", n);
    else
    printf("%d is not a prime number", n);

    return 0;
}