#include <stdio.h>
int main()
{
    int n,r,res=0,ori;
    printf("enter the number:");
    scanf("%d",&n);
    ori=n;
    while(n>0)
{
    r=n%10;
    res=res+(r*r*r);
    n=n/10;
}
if(ori==sum)
printf("given number is armstrong: %d",sum);
else
printf("the given number is not armstrong :%d",ori);
 return 0;
}
