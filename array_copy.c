#include <stdio.h>
int main() {
    int a[19],n,i,b[20];
    printf("enter thr size of array;");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
        printf("%d\t",b[i]);
      }
     
}
