/* Write a C program to check whether a character is alphabet or not.*/

#include<stdio.h>

int main()
{
    char ch;

    printf("Enter a character:");
    scanf("%c", &ch);

    if((ch >= 'a' && ch <='z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("Entered character %c is an alphabet.", ch);
    }
    else
    {
        printf("Entered character %c is not an alphabet.", ch);

        return 0;
    }
    

}