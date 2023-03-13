#include<stdio.h>
#include<math.h>
int root1(int a,int b,int c);
int root2(int a,int b,int c);
int main(){
	int a,b,c;
	printf("enter the values of a,b,c");
	scanf("%d,%d,%d",&a,&b,&c);
	root1(a,b,c);
	root2(a,b,c);
	return 0;
}
int root1(int a,int b,int c)
{
	int s;
		s=sqrt((b*b)-(4*a*c));
	int x=(-b+s)/2*a;

	printf("the root is %d\n",x);
	return x;
}
int root2(int a,int b,int c)
{
    int s;
    s=sqrt((b*b)-(4*a*c));
    int y=(-b-s)/2*a;
    

    printf("the root is %d",y);
    return y;
}
