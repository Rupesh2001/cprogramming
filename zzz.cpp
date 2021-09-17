
  
#include <stdio.h> 
#include <string.h> 
int function(int a, int b); 
  
int main() 
{ 
	int a,b;
   printf("enter a nuber");
   scanf("%d%d",&a,&b);
   
    return 0; 
} 
  
int function(int a, int b) 
{ 
   
   if(a>b)
   {
   	printf("%d is larger",a);
   }
   else{
   		printf("%d is larger",b);
   }
}
