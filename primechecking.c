#include<stdio.h>
int cheprime();
int main()
{
   	
 cheprime();
  return 0;
}
int cheprime(){
	int n,flag=0;
	printf("enter the number:");
	scanf("%d",&n);
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			 flag=1;
			break;
	
		}
		if(flag==0)
		{
			printf("IT IS PRIME");
			break;
		}
		else if(flag==1)
	  {
	  	printf("it is not prime");
	  }
	}

}
