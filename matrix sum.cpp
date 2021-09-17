#include<stdio.h>
int main()
{
	int a[4][4],b[4][4],sum[4][4];
	int i,j;
	printf("emter a number of matrix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)				
		scanf("%d",&a[i][j]);
	}
	printf("emter a number of matrix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&b[i][j]);
	}
		for(i=0;i<3;i++)
		{
		printf("\n");
		for(j=0;j<3;j++)
		sum[i][j]=(a[i][j]+b[i][j]);
		}
		printf("the sum of two matrix is %d\t",&sum[i][j]);
	
	return 0;
}
