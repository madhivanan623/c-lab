#include<stdio.h>
void main()
{
 int year;
 printf("enter the year(yyyy):");
 scanf("%d",&year);
 if(year%4==0&&year%100!=0||year%400==0)
 printf("\nthe given year  %d is a leap year",year);
 else
    printf("\nthe give year %d is not a leap year",year);
}



































