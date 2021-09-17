#include<stdio.h>
int main()
{
	int days,year,month,a,c;
	printf("enter a days");
	scanf("%d",&days);
	year=days/365;
	a=days%365;
	month=a/30;
	c=a%30;
	printf("%dyear\t%d month\t%ddays",year,month,c);
	return 0;
}
