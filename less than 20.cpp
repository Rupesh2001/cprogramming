
#include<stdio.h>
int main()
{
	int a[10];
	int i;
	printf("enter 10 double data");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<10;i++)
	if(a[i]<20)
	{
	printf("%4d",a[i]);
	}
	
	return 0;
}
