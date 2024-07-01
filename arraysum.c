#include<stdio.h>
void main()
{
    int a[10],sum=0,i,l;
    printf("Enter the array limit:");
    scanf("%d",&l);
    printf("Enter the array elements:");
    for(i=0;i<l;i++)
    {
    scanf("%d",&a[i]);
}
for(i=0;i<l;i++)
{
    sum=sum+a[i];

}
printf("sum=%d",sum);
}
