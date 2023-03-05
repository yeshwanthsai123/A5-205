#include<stdio.h>
 int add(int a,int b);
 int main(){
 	int a,b;
 	printf("enter the value of a:");
 	scanf("%d",&a);
 	printf("enter the value of b:");
 	scanf("%d",&b);
    int c=	add(a,b);
 printf("it is %d",c);
 	return 0;
 }
 int add(int a,int b)
 {	
	return a+b;
 }
