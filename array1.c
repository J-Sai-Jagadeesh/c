#include <stdio.h>

int main() {
    int i,a[19],n;
    printf("enter thr size of array;");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
