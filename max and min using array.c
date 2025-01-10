#include <stdio.h>

int main() {
    int a[19],n,i,max,min;
    printf("enter thr size of array;");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
           max=a[i]; 
        }
    }
    
    if(a[i]<min)
    {
        min=a[i];
}
    printf("the maximum and min values are %d %d",max,min);
}
