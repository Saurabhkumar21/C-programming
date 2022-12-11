/*Write a C program to enter temperature in celsius and convert it into the fahrenheit.*/
#include<stdio.h>

int main() {
    float fahreinheit, celsius;

    printf("enter temperature in celsius:");
    scanf("%f", &celsius);

    fahreinheit= celsius*9/5+32;

    printf("celsius to fahreinheit:%f", fahreinheit);

    return 0;
}