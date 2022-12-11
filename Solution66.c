/*Write a C program to create cimple calculator using switch case.*/

#include<stdio.h>

int main()
{
    char op;
    double number1, number2, result;

    printf("WELCOME TO SIMPLE CALCULATOR\n");
    printf("----------------------------\n");
    printf("[number1] [+ - * /] [number2]:\n");

    scanf("%lf %c %lf", &number1, &op, &number2);

    switch(op)
    {
        case '+':
        result = number1+number2;
        break;

        case '-':
        result = number1-number2;
        break;

        case '*':
        result = number1*number2;
        break;

        case '/':
        result = number1/number2;
        break;

        default:
        printf("Invalid operator");
    }
        printf("%.2lf %c %.2lf = %.2lf", number1, op, number2, result);

        return 0;
}