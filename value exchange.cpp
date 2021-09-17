#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("enter the value of a and b:");
	scanf("%d%d",&a,&b);
	printf("before a=%d and b=%d\n",a,b);
temp=a;
a=b;
b=temp;
printf("after a=%d and b=%d\n",a,b);
return 0;	
}
