#include<stdio.h>

int main()
{

int i;
int *j;
j=&i;
scanf("%d",&i);
printf("addr of i is =%u\n",&i);
printf("addr of i is =%u\n",j);
printf("addr of j is =%u\n",&j);
printf("value of i is %d\n",i);
printf("value of i is =%d\n",*(&i));
printf("value of i is =%d\n",*j);


}
