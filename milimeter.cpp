#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("enter a length in milimeter");
	scanf("%d",&a);
	b=a/1000;
	c=a-b*1000;
	d=c/10;
	e=d%10;
	printf("the length in milimeter is %dm\t%dcm and %dmm",b,d,e);
	return 0;
}
