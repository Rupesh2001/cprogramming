#include<stdio.h>
int main()
{
	int a[2][3];
	int i,j;
	printf("enter 2*3 matrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
	}
		for(i=0;i<2;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
	printf("%4d",a[j][i]);
	}
	return 0;
}
