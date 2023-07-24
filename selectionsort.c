#include<stdio.h>
#include<limits.h>
#define max 100
int insort[max];
 int main()
 { 
     int temp,i,j,n;
     printf("enter the size of array:");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
         printf("enter the %d element:",i+1);
         scanf("%d",&insort[i]);
     }
     printf("the unsorted array is \n");
     for(i=0;i<n;i++)
 {
     printf("%d\t",insort[i]);
 }
 printf("\nthe sorted array is \n");
 for(i=0;i<n-1;i++)
 {
     int min;
     min=INT_MAX;
     int minidx=-1;
     for(j=i;j<=n-1;j++)
     {
         if(min>insort[j])
         {
             min=insort[j];
             minidx=j;
         }
         temp=insort[minidx];
         insort[minidx]=insort[i];
         insort[i]=temp;
         
     }
 }
 for(i=0;i<n;i++)
 {
 printf("%d\t",insort[i]);
 }
 }
