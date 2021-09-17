
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter first integer");
	scanf("%d",&a);
	b=a%5;
	if(b==0)
	{
		printf("%d is divisible by 5",a);
	}
	else
	{
		printf("%d is not divisibe by 5",a);
	}
	return 0;
}
