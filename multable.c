#include<stdio.h>
void main()
{
    int n,i,range,m;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Enter a range:");
    scanf("%d",&range);
    for(i=1;i<=range;i++)
    {
        m=i*n;
        printf("%d*%d=%d\n",i,n,m);
    }
}