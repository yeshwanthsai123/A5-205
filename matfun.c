#include<stdio.h>
void mat1(int a,int b);
void mat2(int a,int b);
void res(int a,int b);
 int main()
 {
 	int a,b;
 	printf("enter the values of rows:");
 	scanf("%d",&a);
 	printf("enter the values of columns:");
 	scanf("%d",&b);
 
 	mat1(a,b);
 	mat2(a,b);
 	return 0;
 }
 void mat1(int a,int b)
 {
   int A[a][b];
  
   for(int i=0;i<a;i++)
   {
   	for(int j=0;j<b;j++)
   	{
   		printf("the element is A[%d][%d]:",i,j);
	    scanf("%d",&A[i][j]);
	   }
   }
   for( int i=0;i<a;i++)
   {
       for(int j=0;j<b;j++)
       {
           printf("%d\t",A[i][j]);
       }
       printf("\n");
   }
 }
 void mat2(int a,int b)
 {
   int B[a][b];
  	
   for(int i=0;i<a;i++)
   {
   	for(int j=0;j<b;j++)
   	{
   		printf("the element is B[%d][%d]:",i,j);
	    scanf("%d",&B[i][j]);
	   }
   }
   for( int i=0;i<a;i++)
   {
       for(int j=0;j<b;j++)
       {
           printf("%d\t",B[i][j]);
       }
       printf("\n");
   }
 }
