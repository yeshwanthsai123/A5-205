#include<stdio.h>
#define size 5
// FIFO-first in first out//
//we need few things to follow
   int rear =-1;
   int front =-1; 
   int queue[size];
   
void insert()
{
	int data;
	if(rear==size-1)
	{
		printf("overflow");
	}
	else
	{
		printf("enter value:");
		scanf("%d",&data);
		if(front==-1)
		{
			front=0;
		}
			rear++;
			queue[rear]=data;
			printf("data is added");
	
	}
}

void Delete()
{
	if(front==-1 || front>rear)
	{
		printf("nothing");
	}
	else 
	{
		front++;
		printf("yooo you lost one number in the queue");
	
	}
}

void peek()
{
	if(front==-1||front>rear)
	{
		printf("add something and try deleting them ");
	}
	else
	{
		printf("\nthe top element is %d",queue[rear]);
	}
}

void display()
{
	if(front==-1 ||front>rear)
	{
		printf("add something and try deleting them ");
	}
	else
	{
		int i;
		for(i=front;i<=rear;i++)
		{
			printf("%d\t",queue[i]);
		}
	}
}
int main()
{
   
printf("let us start \n");
while(1)
{
	int ch;
	printf("\n 1)-insert\n2)-delete\n3)-peek\n4)-display\n");
	scanf("%d",&ch);
	if(ch==1)
	{
	insert();
	}
	else if(ch==2)
	{
		Delete();
	}
	else if(ch==3)
	{
		peek();
	}
	else if(ch==4)
	{
		display();
	}
		else
	{
		break;
	}
	}
		

	
}
