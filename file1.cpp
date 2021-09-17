#include<stdio.h>
int main()
{
	char a,b,c,d;
	FILE*fp;
	fp=fopen("character.txt","w");
	scanf("%c%c%c%c",&a,&b,&c,&d);
	fprintf(fp,"%c%c%c%c",a,b,c,d);
	return 0;
	
}
