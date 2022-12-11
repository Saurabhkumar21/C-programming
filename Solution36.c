/*Write a C program to enter length in centimeter and convert it into meter and kilometer.*/

#include<stdio.h>

int main() {

    float centimeter, meter, kilometer;

    printf("enter length in centimeter:");
    scanf("%f", &centimeter);

    meter = centimeter/100;
    kilometer = centimeter/100000;

    printf("centimeter into meter:%f\n", meter);
    printf("centimeter into kilometer:%f\n", kilometer);

    return 0;
}