#include<stdio.h>
int main()
{
    int n,m;
    printf("lower case:");
    scanf("%d",&n);
    printf("upper case:");
    scanf("%d",&m);
    
    for(;n<=m;n++){
        if((n%100==0)&&(n%400==0)||(n%4==0)){
            printf("%d ",n);
            
        } 
    }


    return 0;
}