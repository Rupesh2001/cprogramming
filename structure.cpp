#include<stdio.h>
struct person{
	char name[20];
	int age;
	float height;
	
}p;
int main()
{
	printf("enter a name age and height\n");
	scanf("%s%d%f",p.name,&p.age,&p.height);
	printf("%s\t%d\t%f",p.name,p.age,p.height);
	return 0;
}

