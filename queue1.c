#include<stdio.h>
#define max 5
int arr[max];
int front,rear,n,data,op;
void inqueue();
void dequeue();
void main()
{
    while(op!=3)
    {
    printf("1.insert queue\n2.delete queue\nEnter an option:");
    scanf("%d",&op);
    if(op==1)
    {
   inqueue();
    }
    
    
    else
    {
        dequeue();
}
}
}
void inqueue()
{
    if (rear==max-1)
    {
        printf("Queue is full:");
    }
    printf("Enter element:");
    scanf("%d",&n);
    rear++;
    arr[rear]=n;

}
void dequeue()
{
    if(front=-1||front>rear)
    {
        printf("the queue is empty\n");
    }
    else
    {
        printf("the dequeue is:",arr[front]);
        front++;
    }
}
