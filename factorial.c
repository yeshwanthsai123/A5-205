#include<stdio.h>
#include<conio.h>

int main()
{
	int n;
	printf("Enter the numbers:");
	scanf("%d",&n);
	int i=1,sum=1;
	do
	{
		sum*=i;
		i++;
	}
	while(i<=n);
	printf("The sun of n numbers is %d",sum);
	return 0;
}
