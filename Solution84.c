/*Searchon what a "nested loop" is & print this pattern using it.
    * * * * *
    * * * * *
    * * * * *
    * * * * * */
#include<stdio.h>

int main()
{
    int i, j;

    for(j=1; j<=4; j++)
    {
        for(i=1; i<=5; i++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;

}

