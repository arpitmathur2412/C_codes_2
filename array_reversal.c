#include<stdio.h>//elements of array in reverse order//
int main()
{    int i=0;
    int a[5];
    for(int i=0;i<=4;i++){
        printf("enter %d element of array:",i);
        scanf("%d",&a[i]);
    }
for(int j=4;j>=i;j--){
    printf(" %d ",a[j]);
}    
    return 0;
}