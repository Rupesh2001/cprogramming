#include<stdio.h>
int main()
{
	int a,b,x;
	printf("enter a choice");
scanf("%d",&x);
	
	printf("enter a integer");
	scanf("%d%d",&a,&b);


	switch(x)
	{
		case 1:printf("%d",a*b);break;
		case 2:printf("%d",a-b);break;
		case 3:printf("%d",a+b);break;
		case 4:printf("%d",a/b);break;
	}
	return 0;
}
