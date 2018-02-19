#include<stdio.h>
#include<conio.h>
int main()
{
	long int a,n,d,sum=0;
clrscr();

	scanf("%ld %ld %ld",&n,&a,&d);
            sum = (n * (2 * a + (n - 1)* d ))/ 2;
	printf("%ld",sum);
	getch();
  return 0;
  }
