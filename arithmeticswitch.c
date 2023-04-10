#include<stdio.h>
main()
{
char ch;
int a,b,c;
printf("enter your choice");
scanf("%c",&ch);
printf("enter a,b value");
scanf("%d,%d",&a,&b);
switch(ch)
{
case '1':
c=a+b;
printf("%d",c);
break;
case '2':
c=a-b;
printf("%d",c);
break;
case '3':
c=a*b;
printf("%d",c);
break;
case '4':
c=a/b;
printf("%d",c);
break;
default:
printf("invalid operation");
break;
}
}
