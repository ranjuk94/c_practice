#include<stdio.h>
#define max_size 50
int array[max_size],top,value,i;
void push();
void pop();
void display();
void main()
{
    push(5);
    pop();
    display();
}
void push()
{
    if(top==max_size-1)
    {
        printf("The stack is full");
    }
        top++;
        array[top]=value;

    }

void  pop()
    {
        if(top==-1)
        {
            printf("The stack is empty");
        }
        printf("%d",array[top]);
        
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
