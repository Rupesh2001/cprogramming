#include<stdio.h>
int main()
{
	int a;
ask:printf("enter a negative number");
	scanf("%d",&a);
	if(a>=0)
	goto ask; 
	printf("it is negative number %d",a);
	return 0;
}
