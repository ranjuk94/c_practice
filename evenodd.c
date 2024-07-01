#include<stdio.h>
int main()
{
    int n,r;
    printf("Enter a number:");
    scanf("%d",&n);
    r=n%2;
    if(r==0)
    {
    printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }


}