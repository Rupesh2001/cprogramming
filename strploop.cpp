#include <stdio.h>
void display(char name[50],int age,float height);
struct student{
	
	char name[50];
	int age;
	float height;  
}p[2];
int main() 
{
    student p;
	int i;
   for(i=0;i<2;i++)
   {
   	printf("enter name age and height of student");
    scanf("%s", p.name);
	scanf("%d",&p.age);
    scanf("%f",&p.height);
	}
	for(i=0;i<2;i++)
	{
	
    printf("name=%s\nage=%d\nheight=%f",p.name,p.age,p.height);
}
    return 0;
}
