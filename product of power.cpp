#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,e,f,g;
	printf("enter the value of a");
	scanf("%d",&a);
	printf("enter the value of b");
	scanf("%d",&b);
	e=(pow(a,b)+pow(b,b));
	f=(pow(b,a)+pow(a,a));
	g=e*f;
	printf("the product is %d",g);
	return 0;
	}
