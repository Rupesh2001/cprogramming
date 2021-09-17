#include<stdio.h>
#include<string.h>
int main()
{
	char a[30];
	char b[30];
	char c[30];
	printf("enter a string a,b,c");
	scanf("%s%s%s",a,b,c);
	if(strcmp(a,c)>0)
	{
		printf("%s",b);
	}
	else
	{
		printf("%s",c);
	}
	return 0;
}
