#include<stdio.h>
int main()
{
	int i,a;
	do{
		printf("enter a number");
		scanf("%d",&a);	
	}while(a>=0);
	for(i=0;i<1;i--)
	printf("%4d",a);
	return 0;
}
