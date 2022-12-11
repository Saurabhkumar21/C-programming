/*Write a C program to enter any number and calculate its square root.*/

#include<stdio.h>
#include<math.h>

int main() {
    double num, root;

    printf("enter a number and find its square root:");
    scanf("%lf", &num);

    root = sqrt(num);

    printf("squareroot of %.2lf = %.2lf", num, root);

    return 0;
}
