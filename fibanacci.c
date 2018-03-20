#include<stdio.h>
void main()
{
    int n,i,t1=0,t2=1,nexterm;
    printf("enter the values:");
    scanf("%d",&n);
    printf("the fibonacci series:");
    for(i=0;i<=n;i++)
    {
        printf("%d\t",t1);
        nexterm=t1+t2;
        t1=t2;
        t2=nexterm;
    }
}
