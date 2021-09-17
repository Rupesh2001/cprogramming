#include<stdio.h>
int a,b;
void input()
{
	printf("enter number");
	scanf("%d%d",&a,&b);
	
}
void output()
{
	printf("%d",a+b);
}
int main()
{
	input();
	output();
	return 0;
}
