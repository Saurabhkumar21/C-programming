/*Write a C program to enter two numbers and perform all arithmetic operation.*/

#include<stdio.h>

int main() {
    int n1, n2;

    printf("Enter any two numbers:\n");
    scanf("%d %d", &n1, &n2);

    printf("addition of:%d\n", n1+n2);
    printf("subtraction of:%d\n", n1-n2);
    printf("multipliation of:%d\n", n1*n2);
    printf("division of:%d\n", n1/n2);
    printf("modulo of: %d\n", n1%n2);
    
    return 0;
}