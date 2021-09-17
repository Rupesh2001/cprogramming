#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<4;i++)
	{
		printf("\n");
		for(j=i;j<4;j++)
		{
			printf("%4c",'*');
		}
	}
	return 0;
}
