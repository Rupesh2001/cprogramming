#include <stdio.h>
int main()
{
   int m, n, i, d, first[10][10], second[10][10], sum[10][10];
 
   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &m, &n);
   printf("Enter the elements of first matrix\n");
 
   for (i = 0; i < m; i++)
     for (d = 0 ; d < n; d++)
       scanf("%d", &first[i][d]);
 
   printf("Enter the elements of second matrix\n");
 
   for (i = 0; i < m; i++)
     for (d = 0; d < n; d++)

         scanf("%d", &second[i][d]);
 
   printf("sum of entered matrices:-\n");
 
   for (i = 0; i < m; i++) {
     for (d = 0; d < n; d++) {
	 
	 
       sum[i][d] = first[i][d] + second[i][d];
       printf("%d\t",sum[i][d]);
     }
     printf("\n");
   }
 
   return 0;
}

