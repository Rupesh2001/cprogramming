#include<stdio.h>
int main()
{
	int a;
	int i;
	int count=0;
	printf("enter ");
	scanf("%d",&a);
		for(i=0;i<=a;i++)
		{
				for(j=0;j<a;j++)
				{
				
			if(a%i==0)
			{count++;}
		}
		}	
		if(count==2)
		{
			printf("%4d",a);
		}
	return 0;
}
