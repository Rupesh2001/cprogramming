#include<stdio.h>
void display(char a[20])
{

	if(a[i]=='A'||a=='E'||a=='I'||a=='O'||a=='U')
	{
		printf("it is vowel",a);
	}
	else
	{
		printf("it is  not vowel",a);	
	}
}
	
int main()
{
	int a;
	printf("enter a  char");
	scanf("%c",a);
	display(a);
	return 0;

}
