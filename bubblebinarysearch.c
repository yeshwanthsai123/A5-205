#include<stdio.h>

int main()
{
	int n;
	int a[100000];
	printf("Enter the size:");
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)  //anna ekkada manam first array create cheyali//
	{
		printf("enter the elementa[%d]:",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{                      //ekkada manam chesina array ni oka look veyadaniki malli print chedam//
	printf("%d\t",a[i]);
}
int j,k=0;
int temp;
printf("\n");
for(i=0;i<n-1;i++)
{
	for(j=0;j<n-i-1;j++)   //ekkada manam code ni order lo pettadaniki //
	{
		if(a[j]>a[j+1])      // we can also use i<n in spite of i<n-1
		
		{                      //and inplace of j<n-1-i we can use j<n-1
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;	
		}
	}
}
printf("the new orer is:\n");
while(k<n)
{
	printf("%d\t",a[k]);
	k++;
}
int go,low,middle,high=n-1;
low =0;
printf("\nenter value :");
scanf("%d",&go);
int flag=0;
while(low<=high)
{
	
	int middle=(high+low)/2;
	if(go==a[middle])
	{
		flag=1;
		break ;
	}
	else if(go>a[middle])
	{
		low=middle+1;
	}
	else{
		high=middle-1;
	}
}
if(flag==1)
{
	printf("%d has been found at ",go);
	
}	

else
{
	printf("not found");
}
return 0;
}
