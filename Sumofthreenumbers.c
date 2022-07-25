#include<stdio.h>
int main()
{
    int n1,n2,n3,result;

    printf("Enter first integer:");
    scanf("%d",&n1);

    printf("Enter second integer:");
    scanf("%d",&n2);
    
    printf("Enter third integer:");
    scanf("%d",&n3);

    result = n1+n2+n3;
    
    printf("The sum of given three numbers is %d", result);
    
    return 0;
    }