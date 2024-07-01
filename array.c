#include<stdio.h>
#define max 50
 int a[max];
    int l,n,i;
    void create();
    void display();
    void insert();
    void delete();

void main()
{
    
    create();
    display();
    insert();
    delete();
    
}
    void create()
    {
       
       
    printf("enter the limit:");
    scanf("%d",&l);
    printf("enter the elements:");
    for(i=0;i<l;i++)
    {
        scanf("%d",&a[i]);
    }
}
void display()
{
    printf("array elements:\n");
    for(i=0;i<l;i++)
    {
        printf("%d\n",a[i]);
    }

}
void insert()
{
    int pos,value;
    printf("enter the position to insert:");
    scanf("%d",&pos);
    pos=pos-1;
    printf("enter the value:");
    scanf("%d",&value);
    for(int i=l-1;i>=pos;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=value;
    l=l+1;
    display();
}
void delete()
{
    int pos;
    printf("enter the position to delete:");
    scanf("%d",&pos);
    for(i=pos-1;i<l;i++)
    {
    a[i]=a[i+1];
    }
    l=l-1;
    display();
}



