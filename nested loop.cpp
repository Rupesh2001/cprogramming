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
			printf("%d is second greatest",b);
		}
		else
		{
			printf("%d is second greatest",c);
		}
	}
 	else if(b>a&&b>c)
	{
		if(a>c)
		{
			printf("%d is second greatest",a);
		}
		else
		{
			printf("%d is second greatest",c);
		}
	}
	else
	{
	
		if(a>b)
		{
			printf("%d is second greatest",a);
		}
		else
		{
			printf("%d is second greatest",b);
		}
	}
	return 0;
}
