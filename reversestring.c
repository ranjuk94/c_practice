#include<stdio.h>
#include<string.h>
int main()
{
    char str[10],str1[10];
    int i,j=0,length;
    printf("Enter a string:");
    scanf("%s",&str);
     length= strlen(str);
    for(i=length-1;i>=0;i--)
    {
    char temp=str[i];
      str[i]=str1[j];
      str1[j]=temp;
//str1[j]=str[i];
j++;
    }
       printf("the resultant string is %s",str1);

    }
    
    
    

