#include<stdio.h>
void main()
{
    int n,x,s=0,r;
    printf("Enter a number:");
    scanf("%d",&n);

    x=n;
    while(n>0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;

        
    }
    if(s==x)
    {
        printf("Palindrome");

    }
    else
    {
        printf("Not Palindrome");
    }
}