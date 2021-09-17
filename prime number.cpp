#include<stdio.h>
int main()
{
	int n=10;
	int num=1;
	int i;
	int count =0;
	while(num<=n)
	{
		for(i=1;i<=num;i++)
		{
			if(num%i==0)
			{count++;}
		}	
		if(count==2)
		{
			printf("%4d",num);
		}
			count=0;
			num++;
		
	}
	return 0;
}
