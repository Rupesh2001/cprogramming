#include <stdio.h>
int second (int a,int b,int c)
{
  if (a>b&&a<c||a>c&&a<b){
    return a;
  }
  else if (b>a&&b<c||b>c&&b<a){
    return b;
  }
  else 
    return c;
}
int main ()
{
  int a,b,c,s;
  printf ("enter 3 integer");
  scanf ("%d%d%d",&a,&b,&c);
  s=second(a,b,c);
  printf ("\nsecond greatest=%d",s);
  return 0;
}
