#include<stdio.h>
struct person{
	char name[20];
	int model;
	float price;
	
}p[2];
int main()
{
	int i;
	for(i=0;i<2;i++)
	{
	printf("enter a name model and price of car\n");
	scanf("%s",p[i].name);
	scanf("%d",&p[i].model);
	scanf("%f",&p[i].price);
	}
	for(i=0;i<2;i++){
	
	printf("name=%s\nmodel=%d\nprice=%f\n",p[i].name,p[i].model,p[i].price);}
	return 0;
}

