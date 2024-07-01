#include<stdio.h>
void main()
{
    int limit,a=0,b=1,c,i;
    printf("Enter a limit:");
    scanf("%d",&limit);
    printf("the fibonacci series is:%d %d ",a,b);
    for(i=3;i<=limit;i++)
    {
        c=a+b;
        printf("%d ",c);
           a=b;
        b=c;
    }
     

    
    
}