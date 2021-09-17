#include <stdio.h>
int vowel(char *p)
{
  int sum=0,i=0;
  while (p[i]!=NULL)
  {
    if (p[i]=='a'||p[i]=='e'||p[i]=='i'||p[i]=='o'||p[i]=='u'||p[i]=='A'||p[i]=='E'||p[i]=='I'||p[i]=='O'||p[i]=='U')
	{
      sum++;
    }
    i++;
  }
  return sum;
}
int main ()
{
  char a[30];
  int sum;
  printf ("Enter a sentence");
  scanf("%s",a);
  sum=vowel(a);
  printf ("\nsum=%d",sum);
}
