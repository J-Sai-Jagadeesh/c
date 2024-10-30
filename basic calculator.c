#include<stdio.h>
void main()
{
    int a,b;
    char op;
    printf("enter the values of a & b and operater:");
    scanf("%d%d %c",&a,&b,&op);
    switch(op)
    {
        case '+':printf("the addtion is %d",a+b);
                 break;
        case '-':printf("the subtraction is %d",a-b);
                 break;
        case '*':printf("the multiplication is %d",a*b);
                 break;
        case '/':printf("the divison is %d",a/b);
                 break;    
        case '%':printf("the modules is %d",a%b);
        break;
        default:printf("invalid operater");
                break;
    }
}
