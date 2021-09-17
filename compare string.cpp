#include<stdio.h>
#include<string.h>
int main()
{
	char a[10];
	char b[10];
	printf("enter first string");
	scanf("%s",a);
		printf("enter second string");
	scanf("%s",b);
	if(strcmp(a,b)>0)
	{
		printf("%s is greater than %s",a,b);
	}
	else
	{
		printf("%s is greater than %s",b,a);
	}
	return 0;
}
