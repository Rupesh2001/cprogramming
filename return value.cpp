#include<stdio.h>
#include<string.h>
char*smallest(char a[10],char b[10])
{
	if(strcmp(a,b)>0)
	{
		return a;
	}
	else
	{
		return b;
	}
}
int main()
{
	puts(smallest("apple","ab"));
	return 0;
}
