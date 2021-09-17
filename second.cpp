#include<stdio.h>
int main()
{
	FILE *fp;
	int a,b;
	fp=fopen("second.txt","r+");

	fscanf(fp,"%d%d",&a,&b);
	printf("%4d%4d",a,b);
	fprintf(fp,"\n95\t45");
	return 0;
	
}
