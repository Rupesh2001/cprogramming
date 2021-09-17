#include<stdio.h>
int main()
{
	char n;
	char m;
	printf("enter a character:");
	scanf("%c",&n);
		printf("enter a character:");
	scanf(" %c",&m);
	if(n>m)
	{
		printf("%c is smaller than %c",m,n);
	}
	if(n<m)
	{
		printf("%c is smaller than %c",n,m);
	}
	return 0;
}
