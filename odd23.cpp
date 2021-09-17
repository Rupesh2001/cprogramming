#include<stdio.h>
int main()
{
	int n;
	printf("enter n");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("%d even",n);
	}
	else{
		printf("%d odd",n);
	}
	return 0;
}
