#include<stdio.h>
int i;
float a[10];
float sum=0;
void input()
{
	printf("enter 10  number");
	for(i=0;i<10;i++){
	
	scanf("%f",a[i]);
}
}
void process()
{
	for(i=0;i<10;i++)	
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
