/*C program to check whether a triangle is Equilateral, Isosceles or Scalene.*/

#include<stdio.h>

int main()
{
    int side1, side2, side3;

    printf("Enter all three sides of a triangle:\n");
    scanf("%d%d%d", &side1, &side2, &side3);

    if(side1==side2 && side2==side3)
    {
        printf("Eqilateral tringle.");
    }
    else if(side1==side2 || side1==side3 || side2==side3)
    {
        printf("Isosceles triangle.");
    }
    else
    {
        printf("scalene triangle");
    }

    return 0;
}