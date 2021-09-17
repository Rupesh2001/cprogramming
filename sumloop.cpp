#include<stdio.h>
int main()
{
	float a[10];
	int i;
	float sum=0;
	printf("enter 10 float data");
	for(i=0;i<10;i++)
	{
		scanf("%f",&a[i]);
		sum=(sum+a[i]);
	}
	
		
	printf("%f",sum);

	return 0;
}
