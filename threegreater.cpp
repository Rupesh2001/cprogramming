#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three number");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("%d id greater",a);
	}
	if(b>a&&b>c)
	{
		printf("%d is greater",b);
	}
	if(c>a&&c>b)
	{
		printf("%d is greater",c);
	}
	return 0;
	}
