#include<stdio.h>
int main()
{
	char a;
	char b;
	printf("enter first character");
	scanf( " %c",&a);
	printf("enter second character");
	scanf(" %c",&b);
if(a>b)
	{
		printf("%c is greater than %c",a,b);
	}
	if(a==b)
	{
		printf("%c is equal to %c",a,b);
	}

return 0;
}

