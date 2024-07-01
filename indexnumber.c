#include<stdio.h>
#define max 50
void main()
{
    int a[max], k,j,i,flag=0, l,sum,target,temp;
   
    printf("Enter a limit:");
    scanf("%d",&l);
     
     printf("Enter the array elements:");

     for(i=0;i<l;i++)
   {
      scanf("%d",&a[i]);
    
    }

    printf("enter the target:");
    scanf("%d",&target);
     sum=a[0],k=0;
    for( i=1;i<l;i++)
    {
      for(j=1;j<l;j++)
      {
      
        temp=sum+a[j];
        
        if(temp==target)
        {
          flag=1;
          break;
        }
      
      }
      if(flag==1)
      break;
      else{
        sum=a[i];
        k=i;

      }
    }
    
      if(flag==0)
      {
        printf("does not match the target");
      }
      else
      {
        printf("index:%d %d",k,j);
      }
}

    
    
        

