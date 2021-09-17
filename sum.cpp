#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,i,sum=0,p=1;

	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	d=a-b;
	sum=a+b;
	e=a%b;
	f=a/b;
	p=a*b;
	i=(a>b)?a:b;
	printf("sum= %d\n",sum);
	printf("the diffence of two number is %d\n",d);
	printf("the remainder of two number is %d\n",e);
	printf("the divide of two number is %d\n",f);
	printf("the multiply of two number is %d\n",p);
	printf("the large number of two number is %d",i);
	return 0;
}
