#include<stdio.h>//sum of elements in array//
int main()
{
    int n,i,sum;
    char a[n];
    printf("enter the number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter the %d element:",i);
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("%d",sum);
    
    
    return 0;
}