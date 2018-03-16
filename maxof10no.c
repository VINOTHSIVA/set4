#include<stdio.h>
void main()
{
    int i,a[10],n,high=0;
    printf("enter the no of elements:");
    scanf("%d",&n);
    printf("enter the array:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }  high=a[1];
    for(i=1;i<=n;i++)
    {
        if(a[i]>high)
        {
            high=a[i];
        }
    }
    printf("%d",high);
}
