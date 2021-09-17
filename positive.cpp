#include<stdio.h>
int main()
{
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	if(n>0)
	{
		printf("%d is positive number",n);
	}
	if(n<0)
	{
		printf("%d is negative number",n);
	}
	return 0;
}
