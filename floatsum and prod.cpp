#include<stdio.h>
int main()
{
	float a,b;
	printf("enter first float data");
	scanf("%f",&a);
		printf("enter second float data");
	scanf("%f",&b);
	if(a>b)
	{
		printf("sum=%f",a+b);
	}
	else
	{
		printf("product=%f",a*b);
	}
	return 0;
}
