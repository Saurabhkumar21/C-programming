/*Write a C program to print all alphabets from a to z. (-using while loop)*/

#include<stdio.h>

int main()
{
    char ch='a';

    printf("alphabets from a-z are\n");

    while(ch<='z')
    {
      printf("%c\n", ch);
      ch++;
    }

    return 0;


}