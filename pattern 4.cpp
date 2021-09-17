#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<4;i++)
	{
		printf("\n");
		for(j=0;j<4;j++)
		{
			if(i<=j){
			
			printf("%4c",'* ');}
			else{
				printf("%4c",' ');
			}
	 }
	}
	return 0;
}
