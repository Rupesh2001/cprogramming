#include<stdio.h>
int main()
{
	int n=20;
	int i;
	int a=0;
	int b=1;
	int c=a+b;
	while(c<=n)
	{
		printf("%4d",c);
		c=a+b;
		a=b;
		b=c;
		
	}
	return 0;
}
