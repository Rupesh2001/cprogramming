#include<stdio.h>
int main()
{
	char a;
	char b;
	char c;
	printf("enter first character");
	scanf(" %c",&a);
		printf("enter second character");
	scanf(" %c",&b);
		printf("enter third character");
	scanf(" %c",&c);
	if(a>b&&a>c)
	{
		printf("%c,%d is greater",a);
	}
	if(b>a&&b>c)
	{
		printf("%c is greater",b);
	}
	if(c>a&&c>b)
	{
		printf("%c is greater",c);
	}
	return 0;
	}
