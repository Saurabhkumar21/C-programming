/*Write a C program to find maximum between two numbers using switch case.*/

#include<stdio.h>

int main()
{
    int number1, number2;

    printf("Enter two numbers:\n");
    scanf("%d%d", &number1, &number2);

    switch(number1>number2)
    {
        case 0:
        printf("%d is maximum", number2);
        break;

        case 1:
        printf("%d is maximum", number1);
        break;
        
    }

    return 0;

}