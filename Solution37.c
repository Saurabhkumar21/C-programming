/*Write a C program to enter temperature in Farenheit and convert to celsius.*/

#include<stdio.h>

int main() {
    float fahreinheit, celsius;

    printf("enter temperature in fahreinheit:");
    scanf("%f", &fahreinheit);

    celsius= (fahreinheit-32)*5/9;

    printf("convert in celsius:%f", celsius);

    return 0; 

}