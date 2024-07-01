#include<stdio.h>
#include<stdlib.h>
#define max 50
int main()
{
    int a[max];
    int i,l;
    printf("enter the limit");
    scanf("%d",&l);
    printf("enter the array elements");
    for(i=0;i<l;i++)
    {
        scanf("%d",&a[i]);
    }
for(i=0;i<l;i++)
{
    
    
    printf("index %d:%d\n",i,a[i]);
}
}