#include<stdio.h>
int main()
{
	int i;
	int a[12];
	 float sum=0;
	printf("enter 12 number");
	for(i=0;i<12;i++)
	{
		scanf("%d",&a[i]);
	}
		for(i=0;i<12;i++)
		{
			sum=sum+a[i];
				
		}
	printf("average is %f and\n sum is %f",sum/(12*1.0),sum); 
	return 0;
}

