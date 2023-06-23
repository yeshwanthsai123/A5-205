#include<stdio.h>
#define max 5
int array[max];
int top=-1;
int data;
int bye;

void push();
void pop();

void isfull()
{
	if(top==-1)
	{
		printf("not full");		
	}
	else if(max>top)
	{
		printf("can be added ");		
	}
	else if(max==top)
	
	{
	printf("full");	
	}
}
void display()
{
int i;
if(top==-1)
{
	printf("underflow");
	return;
	}
	else
	{
		for(i=0;i<=top;i++)
{
	printf("%d\n",array[i]);
}
		
		}	
}

int main()
{
	printf("let us start\n");
	int ch;
	while(1)
	{
		printf("enter your choice\n1-insert\n2-delete\n3-display\n4-isfull\n");
		scanf("%d",&ch);
		if(ch==1)
		{
		
			push();
			
		}
	else if(ch==2)
		{
			pop();
		}
		else if(ch==3)
		{
			display();
		}
		else if(ch==4)
		{
		isfull();
		}
else {
	return;
}
	}
	return 0;
}





void push()
{
if(top==-1)

	top=0;
	if(top==max)
{
	printf("overflow"); 
	return;
	}
if(top<max)
{
    

 if(top==max)
{
	printf("overflow");
	return;
	}	
else
{

printf("\nenter the number to be added");
scanf("%d",&data);
array[top]=data;
printf("%dis added in array[%d]\n",data,top);
top++;
}
}
}
	void pop()
	
	{
	      if(top==-1)
	      {
	          printf("underflow");
	          return;
	      }
	  bye=array[top];
	  printf("%d ",bye);
	  top--;
	    }
	     
	    
