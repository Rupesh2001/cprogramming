#include<stdio.h>
int main()
{
	FILE*a;
	int i;
	float b[11];
	for(i=0;i<=11;i++)
	{
		fscanf(a,"%f",&b[i]);
		
	}
	a=fopen("float.txt","r");
	for(i=0;i<=11;i++)
	{
		printf("%f\n",b[i]);
	}
	return 0;
	
}
