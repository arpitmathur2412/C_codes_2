#include<stdio.h>
#include<math.h>
int main()
{
    int i=1,n;
    printf("enter the upper case number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        printf(" %d ",i*i);    
    }
    printf("\n");
    for(i=1;i<=n;i++){
        printf(" %d ",i*i*i); 
    }
    printf("\n");
    for(i=1;i<=n;i++){
        printf(" %.2f ",sqrt(i));
    }
    return 0;
}