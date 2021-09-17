#include<stdio.h>
int main()
{
	int a[2][2],b[2][2],minus[2][2];
	int i,j;
	printf("enter a number of 1st matrix");
	for(i=0;i<1;i++)
		{
		for(j=0;j<1;j++)
		scanf("%d",&a[i][j]);
		}
	printf("enter a number of 2nd  matrix");
	for(i=0;i<1;i++)
		{
		for(j=0;j<1;j++)
		scanf("%d",&b[i][j]);
		}
	for(i=0;i<1;i++)
		{
		printf("\n");
		for(j=0;j<1;j++)
		minus[i][j]=(a[i][j]-b[i][j]);
		}
		printf("the subtract of two matrix is %d\t",&minus[i][j]);
printf("\n");
	return 0;
}
