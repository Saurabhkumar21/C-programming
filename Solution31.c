/*Write a C program to enter two numbers and find their sum.*/

#include<stdio.h>

int main() {
    int n1, n2;
    printf("Enter first number:");
    scanf("%d", &n1);
    printf("Enter second number:");
    scanf("%d", &n2);

    printf("Sum of the entered number: %d", n1+n2);
    return 0;
    }