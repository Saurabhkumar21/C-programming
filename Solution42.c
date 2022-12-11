/*Write a C program to enter marks of five subjects and calculate total, average and percentage.*/

#include<stdio.h>
#include<math.h>

int main()
{
    float eng, phy, chem, math, comp;
    float total, average, percentage;

    printf("Enter marks of five subjects: \n" );
    scanf("%f%f%f%f%f", &eng, &phy, &chem, &math, &comp);

    total = eng+phy+chem+math+comp;
    average = total/5.0;
    percentage = (total/500.0)*100;

    printf("total marks:%.2f\n", total);
    printf("average marks:%.2f\n", average);
    printf("percentage:%.2f\n", percentage);

    return 0;
}
