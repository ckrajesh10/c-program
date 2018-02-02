#include<stdio.h>
#include<conio.h>
int main()
{
int year;
printf("enter a year");
scanf("%d",&year);
if(year%400==0)
{
printf("year is leap");
}
else 
{
printf("year is not leap");
}
getch();
}

