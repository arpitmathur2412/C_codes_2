#include<stdio.h>
int main()
{
    int n,a[n],arr[n],i=0,j=0;
    printf("enter the elements in array:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("element %d:",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf(" %d ",a[i]);
    }
    printf("\ncopied array:");
    for(j=0;j<n;j++){
        arr[j]=a[j];
        printf(" %d ",arr[j]);
    }
    return 0;
}