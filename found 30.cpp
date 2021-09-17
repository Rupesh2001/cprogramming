

#include<stdio.h>
int main()
{
	int a[10];
	int i;
	int hardi;
	printf("enter 10 int data");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<10;i++)
	if(a[i]==30)
	{
	
	printf(" found in %d",a[i]);
	hardi=100;
	}
	if(hardi!=30)
	{
		printf("not found");
	}
	
	return 0;
}
