#include<stdio.h>

int main(){
	
	
	
	int arr[100];
	int n;
	printf("enter the number of arrys u want ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		printf("the array in %d is:",i);
		scanf("%d",&arr[i]);
	}
printf("\n");


for(int i=0;i<n;i++)
{
	printf("%d\t",arr[i]);
}


}
