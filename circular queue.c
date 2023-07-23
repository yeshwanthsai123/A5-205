#include<stdio.h>
#define max 5
int queue[max];
int front=-1;
int rear=-1;
int i;
int x;
void insert(int x);
void Delete();
void peek();
void display();
int main()
{
	int ch;
	
	while(1)
	{
		printf("\nPress 1: Insert an element");  
    printf("\nPress 2: Delete an element");  
    printf("\nPress 3: peek the element"); 
	printf("\nPress 4: Display the element");
	printf("\nPress 5: exit from the queue"); 
    printf("\nEnter your choice:");  
   
    scanf("%d", &ch); 
    switch(ch)
    {
    	case 1:
    	
    		insert(x);
    		break;
    	case 2:
    		Delete();
    		break;
    	case 3:
    		peek();
    		break;
    	case 4:
    		display();
    		break;
           case 5:
    		exit(1);
    		break;
	}
	}
}
void insert(int x)
{
	if(front==(rear+1)%max)
	{
		printf("queue is full");
	}
	else if( front==-1&&rear==-1)
	{
		
front=rear=0;
printf("enter number to br inserted:");
scanf("%d",&x);
queue[rear]=x;

	printf("\n%d is front",front);
	printf("\n%d is rear",rear);
	}
	else{
		rear=(rear+1)%max;
		printf("enter number to be inserted:");
		scanf("%d",&x);
		queue[rear]=x;
		printf("\n%d is front",front);
		printf("\n%d is rear",rear);
	}
}

void Delete()
{
	if(front==-1&&rear==-1)
	{
		printf("\nqueue is empty");
	}
	else if(front==rear&&front!=0&&rear!=0)
	{
	queue[front]=x;
	front=-1;
	rear=-1;
	printf("\n%d is deleted",x);	
	printf("\n%d is front",front);
		printf("\n%d is rear",rear);
	}
	else{
		printf("%d is deleted",queue[front]);
		front=(front+1)%max;
		printf("\n%d is front",front);
		printf("\n%d is rear",rear);
		
	}
}

void peek()
{
	if(front==-1&&rear==-1)
	{
		printf("\nqueue is empty");
	}
	else
	{
		printf("the top element is %d",queue[rear]);
	}
}
void display()
{
if(front&&rear==-1)
{
	printf("queue is empty");
	}
	else
	{
		for(i=front;i!=rear;i=(i+1)%max)
		{
			printf("%d\t",queue[i]);
		}
		printf("%d\t",queue[rear]);
		printf("\n%d is front",front);
		printf("\n%d is rear",rear);
		
		}
	
}
