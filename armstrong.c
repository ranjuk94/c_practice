#include<stdio.h>
int main()
{
    
    int n,sum=0,r,i,temp;
    printf("enter a number:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(temp==sum)
    {
        printf("  armstrong number");

    }
    else
    {
        printf(" not an armstrong number");

    }
    

    return 0;
}