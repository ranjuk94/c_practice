#include<stdio.h>
#define max_size 50
int array[max_size];
int top=-1,value,i;
void push();
void pop();
void display();
void main()
{
    int ch=0;
    while(ch!=4)
    {
    printf("Enter a choice\n1.Push\n2.Display\n3.Pop\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: push();
                break;
        case 2:display();
               break;
        case 3:pop();
               break;
        default:printf("invalid choice\n");
    

    }
    }
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
void pop()
{
    if(top==-1)
    {
        printf("stack is empty");
        
    }
    else{
        top--;
    }

}
 void display()
    {
        if(top==-1)
        {
            printf("the stack is empty\n");
        }
        else
        {
        for(i=0;i<top;i++)
        {
            printf("%d\n",array[i]);
        }
        }

        
    }
    