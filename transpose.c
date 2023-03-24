#include<stdio.h>
main()
{
   printf("enter number of rows and columns:\n");
   int m,n;
   scanf("%d,%d",&m,&n);
   int matrix[m][n];
   printf("enter elements of matrix:\n");
   for(int i=0;i<m;i++)
   {
	   for(int j=0;j<n;j++)
	   {
		  printf("Enter the element matrix[%d][%d]:",i,j);
		   scanf("%d",&matrix[i][j]);
	   }
   }
   printf("entered matrix:\n");
   for(int i=0;i<m;i++)
   {
	   for(int j=0;j<n;j++)
	   {
	       printf("%d\t",matrix[i][j]);
    	}
     	printf("\n");
}
printf("transpose matrix:\n");
for(int i=0;i<n;i++)
  {
	for(int j=0;j<m;j++)
	{
		printf("%d\t",matrix[j][i]);
	}
	printf("\n");
  }
}
