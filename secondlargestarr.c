#include<stdio.h>
#define max 50
void main()
{
    int a[max],i,j,b[max],n,temp;
    printf("Enter a limit:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
while(a[i]>0)
{
        if(a[i]>a[i+1])
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
    

            
        }
}


    

  printf("second largest:%d",a[1]);  
}