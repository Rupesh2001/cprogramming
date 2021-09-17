#include<stdio.h>
char *sentence(char a[20])
{
	if(a[20]=='A'||a[20]=='E'||a[20]=='I'||a[20]=='O'||a[20]=='U')
	{
		return a[20];
	}
}
int main()
{
	puts(sentence("my homework"));

	return 0;
}
