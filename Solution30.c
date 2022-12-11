//Write a C program to perform input/output of all basic data types.

#include<stdio.h>

int main() {
    int i;
    char c;
    float f;
    printf("print a character:");
    scanf("%c", &c);

    printf("print an integer:");
    scanf("%d", &i);
    
    printf("print a float:");
    scanf("%f", &f);

    printf("%c\n",c);
    printf("%d\n",i); 
    printf("%f\n",f);

    return 0;
}