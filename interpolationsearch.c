 #include<Stdio.h>
 
int gointer(int arr[],int low,int high,int x)

{
	int pos;
	int m=arr[high]-arr[low];
	int t=high-low;
	if(low<=high&&x>=arr[low]&&x<=arr[high])
	{
	 pos= low + ((double)((t)/m)*(x-arr[low]));
	}
	if(x==arr[high])
	{
		return pos;
	}
	if(arr[pos]==x)
	{
	return pos;
	}
	if(arr[pos]<x)
	{
		return gointer(arr,pos+1,high,x);
	}
	if(arr[pos]>x)
	{
		return gointer(arr,low,pos-1,x);
	}
	
	return -1;
}

int main()
{
	int arr[]={2,4,6,8,10};
	int n=sizeof(arr)/sizeof(arr[0]);
	int x;
	printf("Enter number to be searched:");
	scanf("%d",&x);

int index;
index = gointer(arr,0,n-1,x);
if(index!=-1)
{
	printf("%d is found at posistion %d",x,index+1);
	
}
else
{
	printf("not found");
}
return 0;	
}


