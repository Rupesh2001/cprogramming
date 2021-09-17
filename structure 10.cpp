#include<stdio.h>
struct person{
	char name[20];
	int model[10];
	float price;
	
}p[10];
int main()
{
	int i;
	for(i=0;i<10;i++)
	{
	printf("enter a name model and price of car\n");
	scanf("%s",p[i].name);
	scanf("%d",&p[i].model);
	scanf("%f",&p[i].price);
	}
	for(i=0;i<10;i++)
	{
	
	printf("%s\t%d\t%f",p[i].name,p[i].model,p[i].price);
	}
	return 0;
}

