#include<stdio.h>
int main()
{
	double a,b;
	printf("enter a number:");
	scanf("%lf",&a);
		printf("enter a number:");
	scanf("%lf",&b);
	if(a==b)
	{
		printf("%lf is equal to %lf",a,b);
	}
	if(a!=b)
	{
		printf("%lf is not equal to %lf",a,b);
	}
	return 0;
	
}
