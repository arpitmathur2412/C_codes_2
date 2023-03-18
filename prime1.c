#include<stdio.h>
int main()
{
    int n,f,c,d;
    printf("enter the number:");
    scanf("%d",&n);

    for(int i=2;i*i<=n;i++){
        f=n%i;
        if(f==0){
            c++;
        }
        if(f!=0){
            d++;
        }
        
    }
    if(c>0){
        printf("it is not prime");
    }
    else printf("it is prime");


    return 0;
}