#include<stdio.h>
#include<conio.h>
int main()
{
int a[3],b[3],c[3],sum,num,i;
clrscr();
printf("\n enter the 1st array:");
for(i=0;i<3;i++)
{
printf("\n enter the values:");
scanf("%d",&a[i]);
}
printf("\n enter the 2st array:");
for(i=0;i<3;i++)
{
printf("\n enter the values:");
scanf("%d",&b[i]);
}
printf("ADDITION OF 2 ARRAY IS \N");
for(i=0;i<3;i++)
{
c[i]=a[i]+b[i];
printf("\n the sum of %d & %d is %d",a[i],b[i],c[i]);
}
getch();
}

