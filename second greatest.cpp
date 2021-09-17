#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a number a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	{
		if(b>c)
		{
			printf("second greatest is %d",b);
		}
		else
		{
		printf("second greatest is %d",c);	
		}
	}
	else if(b>a&&b>c)
	{
		if(a>c)
		{
			printf("second greatest is %d",a);
		}
		else
		{
			printf("second greatest is %d",c);
		}
	}
	else
	{
		if(a>b)
		{
			printf("second greatest is %d",a);
		}
		else
		{
			printf("second greatest is %d",c);
		}
	}
	return 0;	
}
