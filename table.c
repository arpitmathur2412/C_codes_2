#include<stdio.h>
int main()
{
    for(int n=1;n<21;n++){

        for(int i=1;i<11;i++){
        printf("%dx%d=%d\n",n,i,n*i);
    }
    printf("---------------");
    printf("\n");
    }
    return 0;
}