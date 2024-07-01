#include<stdio.h>
void main()
{
    int a,b,sum,diff,mul,div;
    char op;
    printf("Enter an operator:");
    scanf("%c",&op);
    printf("Enter two number:");
    scanf("%d%d",&a,&b);
    
    switch(op)
    {
        case'+':
        sum=a+b;
        printf("%d",sum);
        break;

        case'-':
        diff=a-b;
        printf("%d",diff);
        break;

        case'*':
        mul=a*b;
        printf("%d",mul);
        break;

        case'/':
        div=a/b;
        printf("%d",div);
        break;
        default:printf("Enter a valid operator");
    }
}