#include<stdio.h>

int main()
{
	int rev=0,rem,num,flag;
	printf("enter the number :");
	scanf("%d",&num);
	flag=num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
		
	}
	printf("reverse number is %d\n",rev);
	
	
	if(flag==rev)
	
	{
		printf(" %d it is a palindrome",flag);
	
	}
	else
	 {
		printf("%d it is not",flag);
	}
	return 0;
}
