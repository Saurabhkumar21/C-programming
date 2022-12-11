/*Write a C program to print all odd numbers from 1 to n.*/

#include<stdio.h>

int main()
{
    int n, i;

    printf("Print odd numbers till:");
    scanf("%d", &n);

    printf("print all odd numbers from 1 to %d: \n", n);

    for(i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
    
}