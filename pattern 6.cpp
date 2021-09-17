#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		
		for(j=5;j>=i;j--)
		{
			if(i>=j)
		 {
			
			printf("%d",'*');
		}
		else{
		
			printf("%d",' ');
		}
		}
		printf("\n");
	}
	return 0;
}
