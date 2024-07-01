#include<stdio.h>
void main()
{
    int l,i,sum=0;
printf("Enter a limit:");
scanf("%d",&l);
for(i=1;i<=l;i++)
{
    sum=sum+i;
    
}
printf("Sum=%d",sum);
}