#include<stdio.h>
int main()
{
	int a,b;
	int i;
	printf("enter 2 integer");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		for(i=b;i<a;i++)
		printf("%d\t",i);
	}
	else
	{
		for(i=a;i<b;i++)
		printf("%d\t",i);
	}
	return 0;
}
