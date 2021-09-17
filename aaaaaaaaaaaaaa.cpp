#include<stdio.h>
#include<string.h>
struct person{
	char name[30];
	int age;
	double height;
}p[5];

int main()
{
int i;

FILE *a;
a=fopen("demo.txt","w+");
printf("enter a name age and height");
for(i=0;i<5;i++)
	{
	scanf("%s",p[i].name);
	scanf("%d",&p[i].age);
	scanf("%lf",&p[i].height);
	}
for(i=0;i<5;i++)
	{
	if(strcmp(p[i].name,"r")==0)
		{
		
fprintf(a,"%s\n",p[i].name);
fprintf(a,"%4d",p[i].age);
fprintf(a,"%lf\n",p[i].height);
	}
}
return 0;
	
}
