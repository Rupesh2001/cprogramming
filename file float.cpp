#include<stdio.h>
int main()
{
	FILE*a;
	int i;
	float b[11];
	printf("enter 10 float data");
	for(i=0;i<=11;i++)
	{
		scanf("%f",&b[i]);
		
	}
	a=fopen("float.txt","w");
	for(i=0;i<=11;i++)
	{
		fprintf(a,"%9f",b[i]);
	}
	return 0;
	
}
