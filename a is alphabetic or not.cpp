#include<stdio.h>
int main()
{
	char a;
	printf("enter character");
	scanf("%c",&a);
	if(a=='A')
	{
		printf("%c is alphabetic ",a);
		
	}
	else
	{
		printf("not",a);
	}
	return 0;
}
