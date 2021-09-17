#include<stdio.h>
int main()
{
	FILE *myfile;
	char a[50];
	myfile=fopen("sentence.txt","w+");
	fputs("this is belongs to rupesh mahat",myfile);
	fseek(myfile,-13,0);
	fgets(a,20,myfile);
	printf("total string is %4d\n",ftell(myfile));
	puts(a);
	return 0;
}
