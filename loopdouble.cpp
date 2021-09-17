#include<stdio.h>
int main()
{
	double a[10];
	int i;
	printf("enter 10 double data");
	for(i=0;i<10;i++)
	{
		scanf("%lf",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]<20)
		{
			printf("%lf",a[i]);
		}
	}
	return 0;
}

