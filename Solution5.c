#include<stdio.h>
int main()
{
    int l,b;

    printf("Enter Length of the Rectangle:");
    scanf("%d",&l);

    printf("Enter Breadth of the Rectangle:");
    scanf("%d",&b);

    printf("Perimeter of rectangle is %d", 2*(l+b));

    return 0;
}