#include<stdio.h>
int main()
{
	int a;
	printf("enter a number");
	scanf("%d",&a);
	switch(a)
	{
		case 1:printf("sunday");break;
		default:printf("invalid");
		return 0;
	}
}
