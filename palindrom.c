#include<stdio.h>
void main()
{
    int n,i,r,s=0,x;
    printf("Enter a number:");
    scanf("%d",&n);
    x=n;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(x==s)
    {
        printf("Palindrome");
    }
    
    else
    {
        printf("Not Palindrome");
    }
    
}