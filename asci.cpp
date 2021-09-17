#include<stdio.h>
#include<stdlib.h>
int main(int argc,char*argv[])
{
  int i,s=0,n;
  if (argc!=12)
  {printf("enter 12 arguement");}
 for (i=1;i<argc;i++)
 {
   n=atoi(argv[i]);
  s=s+n;
}
printf("\nsum=%4d",s);
  return 0;
}

