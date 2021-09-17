#include<stdio.h>
int main()
{
	FILE *a;
	a=fopen("hello.txt","w");
	fprintf(a,"hello\n my name is rupesh");
	return 0;
}
