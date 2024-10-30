#include <stdio.h>
#include<math.h>

int main()
{
    float r1,r2;
    int a,b,c,d;
    printf("enter a,b,c values:");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d>0)
{
    printf("the roots are real & distinct\n");
    r1=-b+sqrt(d)/(2*a);
    r2=-b-sqrt(d)/(2*a);
    printf("r1 and r2 values are %2f%2f:",r1,r2);
}
    else if(d<0)
    {
        printf("the roots are real&imaginary");
    }
    else
    {
        printf("the roots are real&equal\n");
        r1=r2=-b/(2*a);
        printf("r1 and r2 values %2f%2f',r1,r2");
    }
    return 0;
}
