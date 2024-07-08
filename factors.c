#include<stdio.h>
void main()
{
    int n,i,r;
    printf("Enter a Number:");
    scanf("%d",&n);
    printf("The factors of %d:\n",n);
    for(i=1;i<=n;i++)
    {
        r=n%i;
        if(r==0)
        {
            printf("%d\n",i);
        }
    }
}