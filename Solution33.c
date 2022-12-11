/*Write a C program to enter length and breadth of a rectangle  and find its perimeter.*/

#include<stdio.h>

int main() {
    int l, b;

    printf("enter length of rectangle:");
    scanf("%d", &l);

    printf("enter breadth of rectangle:");
    scanf("%d", &b);

    printf("perimeter of rectangle is %d", 2*(l+b));

    return 0;
}