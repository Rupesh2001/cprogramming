#include<stdio.h>
int main()
{
	char a[10];
	int i;
	printf("enter a character");
	for(i=0;i<10;i++)
	{
		scanf("%c",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]>'A'&&a[i]<'Z'||a[i]>'a'&&a[i]<'z')
		{
			printf("%6c",a[i]);
		}
	}
	return 0;
}

