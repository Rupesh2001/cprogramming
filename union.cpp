#include<stdio.h>
union person{
	char name[30];
	int age;
	float height;
	
}p[7];
int main()
{

int i;
for(i=0;i<7;i++)
	{	
	printf("enter name age and  height of student\n");
	scanf("%s",p[i].name);
	scanf("%d",&p[i].age);
	scanf("%f",&p[i].height);
	}
for(i=0;i<7;i++)
	{
	printf("name=%s\n",p[i].name);
	printf("age=%d\n",p[i].age);
	printf("height%f\n",p[i].height);	
	}	
return 0;
}
