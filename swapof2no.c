
#include<stdio.h>
void main()
{
int a,b;
printf("enter the values of a and b");
scanf("%d%d",&a,&b);
swap(a,b);
}
int swap(x,y)
{
x=x+y;
y=x-y;
x=x-y;
printf("%d\t%d",x,y);
}
