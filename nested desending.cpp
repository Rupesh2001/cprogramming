#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three value of a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b&&a>c)
	{
		if(b>c)
		{
			printf("%4d%4d%4d",a,b,c);
		}
		else
		{
			printf("%4d%4d%4d",a,c,b);
		}
	}
	if(b>a&&b>c)
	{
		if(a>c)
		{
			printf("%4d%4d%4d",b,a,c);
		}
		else
		{
			printf("%4d%4d%4d",b,c,a);
		}
	}
	
	else
	{
		if(a>b)
		{
			printf("%4d%4d%4d",c,a,b);
		}
		else
		{
			printf("%4d%4d%4d",c,b,a);
		}
	}
	return 0;
}
