/*Write a program o print prime numbers in a range.*/

#include<stdio.h>

int main()
{
    int start, end, num, count, prime, temp;

    printf("Enter start and end value\n");
    scanf("%d %d", &start, &end);

    if (start > end)
    {
        temp = start;
        start = end;
        end = temp;
    }

    printf("Prime numbers between %d and %d are\n", start, end);

    for(num = start; num <= end; num++)
    {
       prime =1;
       for(count = 2; count < num; count++ )
       {
        if (num % 2 == 0)
        {
            prime = 0;
            break;
        }
       }

       if(prime) printf("%d\t", num);
    }

    return 0;
}