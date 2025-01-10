#include <stdio.h>

int main() {
    int i,a[19],n,sum=0;
    printf("enter thr size of array;");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("the sum of the elements of the array %d",sum);
}
