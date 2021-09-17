#include<stdio.h>
float a[12];
int i;
float sum=0;
void input()
{
	printf("enter a float number ");
	for(i=0;i<12;i++)
	scanf("%f",&a[i]);
	
}
void process()
{
	for(i=0;i<12;i++)
	sum=sum+a[i];
	
}
void output()
{
	printf("sum=%f",sum);
}
int main()
{
	input();
	process();
	output();
	return 0;
}

