/*Write a C program to enter length and braedth of a rectangle and find its area.*/

#include<stdio.h>

int main() {
    int l, b;

    printf("length of a rectangle:");
    scanf("%d", &l);

    printf("breadth of a rectangle:");
    scanf("%d", &b);

    printf("area of rectangle:%d", l*b);

}