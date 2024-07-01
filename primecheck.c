#include<stdio.h>
void main()
{
    int n,i;
    int flag=1;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
    
      if(n%i==0)
{

    flag=0;
    break;
}
    }
    
    if(flag==1)
    {
        printf("the number is prime");

    }
    else
    {
        printf("the number is not prime");
    }
}