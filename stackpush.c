#include<stdio.h>
#define max_size 50
int array[max_size];
int top,value,i;
void push();
void display();
void main()
{
    push();
    display();
}
void push()
{
    printf("enter the value:");
    scanf("%d",&value);
      if(top==max_size-1)
    {
        printf("The stack is full");
    }
        top++;
        array[top]=value;
    
}
 void display()
    {
        if(top==-1)
        {
            printf("the stack is empty");
        }
        for(i=0;i<top;i++)
        {
            printf("%d",array[i]);
        }
    }