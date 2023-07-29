#include<stdio.h>
# define max 5
int n;
int temp;
int insort[max];

int main()
{
int i,j;
	
	for(i=0;i<max;i++)
	{
		printf("enter the element %d:",i+1);
		scanf("%d",&insort[i]);
	}
	
	for(i=0;i<max;i++)
	{
		printf("%d\t",insort[i]);
	}
	for(i=1;i<max;i++)       //5,4,15,2,1
	                         //temp=4 and inosrrt[j]=5
	{
	temp=insort[i];
	j=i-1;                        //5 and 4 are checked and gets swapped and while goes out since j becomes less than o
	while(j>=0&&insort[j]>temp)   // next temp is 15 and insort[j] is 5 while comes out
	{                             // next temp is 2 and insort[j] is 15 checks 
		insort[j+1]=insort[j];
		j--;
		}	
	insort[j+1]=temp;	
	}
	printf("\n");
	for(j=0;j<max;j++)
	{
		printf("%d\t",insort[j]);
	}
}
