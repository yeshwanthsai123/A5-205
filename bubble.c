#include<stdio.h>

int main()
{
	int n,temp;
	int a[n];
	int i,j,k=0;
	printf("enter the size of elements:");
	scanf("%d",&n); 
	printf("\nthere are %d integers enter them\n",n);
	for( i=0;i<n;i++)
	{
		printf("enter the elment a[%d]:",i+1);
		scanf("%d",&a[i]);
	}
    printf("your elements are :");
    for( i=0;i<n;i++)
    {
    	
    printf("%d\t",a[i]);
	}

for(i=0;i<n-1;i++)
{
	printf("step %d",i+1);
	for(j=0;j<n-1-i;j++)
	{
		if(a[j]>a[j+1])
		{
		    temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
}
printf("\nthe new order is\n");

while(k<n)
{
	printf("%d\t",a[k]);
	k++;
}

}
