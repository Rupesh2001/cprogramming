#include<stdio.h>
int main()
{
	char a,b,c,d;
	FILE*fp;
	fp=fopen("character.txt","r");
	fscanf(fp,"%c%c%c%c",&a,&b,&c,&d);
	printf("%c%c%c%c",a,b,c,d);
	return 0;
	
}
