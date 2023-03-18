#include<stdio.h>
int main()
{
    int n;
    printf("enter the the number till which you want to check:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d",i);
    }
     printf("\neven:");
    for(int i=1;i<=n;i++){
        if(i%2==0) printf(" %d ",i);
    }
    printf("\nodd:");
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            printf( " %d ",i);
        }
    }

    return 0;
}