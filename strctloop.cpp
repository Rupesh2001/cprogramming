#include <stdio.h>
void display(char name[50],int age,float height);
struct student
{
	char name[50];
	int age;
	float height;
    
};
int main() 
{
    student p;
    printf("Enter information\n" );
    printf( "Enter name: ");
    scanf("%s", p.name);
   printf( "Enter age: ");
scanf("%d",&p.age);
    printf("Enter height: ");
    scanf("%f",&p.height);
    printf("%s\t%4d\t%f",p.name,p.age,p.height);
       return 0;
}
