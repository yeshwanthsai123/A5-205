#include<stdio.h>
 
int main()
{
	int N;
	//N=a+b+c,the numbers a,b,c are split in such way that their sum is N
	printf("Enter the number:");
	scanf("%d",&N);
	
	if(N>10 && N<100)//the number range is given
	{
	int a,b,c;//declaring a,b,c as sum of N
	int flag;
	printf("Your is valid\n");
    a=N-33;//dividing N in terms of a
    printf("The value is %d\n",a);
    b=N-(a)-5;//divinding b in terms of n
    printf("The value is %d\n",b);
    c=5;//diving c in terms of N
    printf("The value is %d\n",c);   
    if(a>b &&a>c)//checking whether a is greater than b and c
    {//if true this part of code excutes the factors of a
    	printf("The greatest number is %d\n",a);
    	printf("the factors are as follows:");
    	for(flag= 1; flag<=a;flag++)
    	{
    		if(a%flag == 0)//kept in loop to find the factors of a
    		{
    		    
				printf("%d,",flag);//prints the factors of a
			}
		}
	}
	if(b>c && b>a)//checking whether b is greater than a and c
	{//if true this part of code gets executed and gives factors of b
	printf("The greatest number is %d\n",b);	
    	printf("the factors are as follows:");
    	for(flag= 1; flag<=b;flag++)
    	{//kept in loop to find the factors of b
    		if(b%flag == 0)//prints factos of b
    		{
    		    
				printf("%d,",flag);
			}
		} 
	}
	if(c>a && c>b)//checks whether c is greaTER than a and b
	{// if true this part excutes the factors of c
		printf("The greatest number is %d\n",c);
    	printf("the factors are as follows:");
    	for(flag= 1; flag<=c;flag++)
    	{
    		if(c%flag == 0)//kept in loop to find the factors of c
    		{
    		    
				printf("%d,",flag);//prints the FACTOrs of c
			}
		}
	}
	
	}
	else// if the number range is not between this part executes
	{
		printf("Write a number between 10 and 99 only!!!!");
	}
	return 0;
	
}
