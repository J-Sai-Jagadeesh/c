#include <stdio.h>
int main()
{
    int n,rev=0,rem,ori;
    printf("enter the number:");
    scanf("%d",&n);
    ori=n;
    while(n>0)
{
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
}
if(rev==ori)
printf("given number is palindrome: %d",rev);
else
printf("the given number is not palindrome :%d",ori);
 return 0;
}
