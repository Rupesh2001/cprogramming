#include<stdio.h>
void display(int a[10])
{
	int i;
	for(i=0;i<10;i++)
	printf("%d",a[i]);
}
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,0};
	display(a);
	return 0;
}
