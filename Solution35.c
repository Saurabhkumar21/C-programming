/*Write a c program to enter radius of a circle and find its diameter, circumference and area.*/

#include <stdio.h>
#define PI 3.14

int main()
{
float radius, diameter, area, circumference;

printf("enter radius of a circle:");
scanf("%f", &radius);

diameter = 2*radius;
circumference = 2*PI*radius;
area = PI*radius*radius;

printf("diameter of circle: %f\n",diameter);
printf("circumference of circle: %f\n", circumference);
printf("area of circle: %f\n", area);

return 0;
}



