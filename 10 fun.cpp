#include<stdio.h>
void display(int a[10])
{
	int i;
	for(i=0;i<10;i++)
	printf("%4d",a[i]);
}
int main()
{
	int a[10];
	int i;
	printf("enter a 10 number");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	display(a);
	return 0;
}
