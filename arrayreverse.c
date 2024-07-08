#include<stdio.h>
#define max 50
void main()
{
    int l,a[max],i,j,temp=0;
    printf("Enter a limit:");
    scanf("%d",&l);
    printf("Enter the array elements:");
    for(i=0;i<l;i++)
    {
        scanf("%d",&a[i]);
    }

printf("The reverse array is:");
    while(a[i]>=a[0])
    {
        temp=a[i];
        printf("%d ",temp);
        a[j]=temp;
        break;
        i--;
    }
    
       /*for(i=l-1;i>=a[0];i--)
    {
    
        temp=a[i];
    
    
    }
    */
}
