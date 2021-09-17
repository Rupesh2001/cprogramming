#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three integer number");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&b>c)
	{
		printf("%d is greater than %d and %d",a,b,c);
	}
	if(b>a&&b>c)
	{
		printf("%d is greater than %d and %d",b,a,c);
	}
	if(c>a&&c>b)
	{
		printf("%d is greater than %d and %d",c,a,b);
	}
	return 0;
}
